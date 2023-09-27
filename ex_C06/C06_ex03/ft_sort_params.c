/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:19:56 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/28 11:23:18 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2) // toma 2 pointers a caracteres (char *) como argumentos y devuelve un entero
{
	while (*s1 && *s2) // loop  mientras los valores apuntados por s1 y s2 no sean nulos ('\0')
	{
		if (*s1 != *s2) // condicion que compara los caracteres apuntados por s1 y s2
			return (*s1 - *s2); // si los caracteres son diferentes, devuelve la diferencia entre los valores ASCII de los caracteres
		++s1;
		++s2; // incrementa los punteros s1 y s2 para avanzar a los siguientes caracteres en las strings
	}
	return (*s1 - *s2); // si son iguales en este punto, devuelve la diferencia entre los valores ASCII de los caracteres nulos, lo que es generalmente 0
}

void	ft_sort(int argc, char *argv[]) // se define ft_sort que toma el contador de argumentos (argc) y el vector de argumentos (argv) como argumentos
{
	int		i;
	int		j; //  'i' y 'j' para iterar sobre los argumentos
	char	*tmp; // es un puntero que se utilizará para intercambiar elementos (temporal)

	i = 1; // empieza en el primer argumento, ya que generalmente el argv[0] contiene el nombre del programa
	while (i++ < argc) // loop  mientras i sea menor que el número total de argumentos. El post-incremento (i++) evalua la condición antes de incrementar i
	{
		j = 1; // se utilizará para comparar y ordenar los argumentos
		while (++j < argc) // loop mientras j sea menor que el  total de argumentos. El pre-incremento (++j) es para evaluar la condición después de incrementar j
		{
			if (ft_strcmp(argv[j - 1], argv[j]) < 0) // compara dos argumentos adyacentes con ft_strcmp. Si es menor que 0, 
				                                     // significa que el argumento en argv[j - 1] es mayor (alfabéticamente) que el argumento en argv[j]
			{
				tmp = argv[j - 1]; // guarda el puntero del argumento mayor en tmp
				argv[j - 1] = argv[j]; // intercambia los punteros de los argumentos para ordenarlos
				argv[j] = tmp; // Asigna el puntero del argumento mayor (almacenado en tmp) al lugar correcto
			}

	}
}

int	main(int argc, char *argv[])
{
	ft_sort(argc, argv); // llama a la función ft_sort para ordenar los argumentos en orden alfabético descendente
	while (--argc) // loop mientras argc no sea cero. El pre-decremento --argc disminuye el valor de argc antes de evaluar la condición
	{
		while (*argv[argc]) // otro loop que se ejecuta mientras el valor apuntado por argv[argc] no sea nulo. Esto recorre los caracteres de un argumento
			write(1, argv[argc]++, 1); // escribe el carácter apuntado por argv[argc] utilizando la función write
		                               // luego incrementa el puntero argv[argc] para imprimir los caracteres de un argumento uno por uno
		write(1, "\n", 1); // despues de imprimir todos los caracteres de un argumento, se agrega un carácter de nueva línea
	}
	return (0);
}
