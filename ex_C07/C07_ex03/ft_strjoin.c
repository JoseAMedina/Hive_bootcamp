/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:53:27 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/31 09:55:18 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str) // función para calcular la longitud de un string
{
	long long i;

	i = 0;
	while (str[i])
		++i;
	return (i); // 'i' representa la longitud de la cadena
}

char		*ft_strcat(char *dst, char *src) //(añade una cadena 'src' al final de otra cadena 'dst'
									         // recibe 2 pointers to strings like arguments: 'dst' is destinity string, 'src' is the add string
{
	while (*src) // cada iteración, copia el caracter actual de 'src' en la posición actual de 'dst' y luego avanza los punteros 'dst' y 'src' al siguiente caracter
		*(dst++) = *(src++);
	return (dst); // devuelve el puntero 'dst', que ahora apunta al final de la string resultante
}

char		*ft_strjoin(int size, char **strs, char *sep) // 3 arguments: integer size, pointers array to strings 'strs', pointer to string 'sep' 
	                                                      // objetivo unir las strings en el array 'strs' utilizando el separador sep
{
	char		*ret;
	char		*tmp;
	long long	strs_len;
	int			i;

	if (!size) // si es igual a cero, la función maneja este caso especial asignando memoria para una cadena de un solo caracter (caracter nulo '\0') y la devuelve
	{
		ret = ((char *)malloc(1));
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0; // if not, calcula la longitud total de las cadenas en 'strs' (almacenada en 'strs_len') y el espacio necesario para los separadores 
	i = 0;
	while (i < size) // itera mientras 'i' es menor que 'size'(número de strings en el array 'strs')
		strs_len += ft_strlen(strs[i++]); // call función 'ft_strlen' con 'strs[i]', calcula la longitud de la string en strs[i] (longitud del string actual)
                                          // resultado suma a 'strs_len', utilizado para calcular el tamaño necesario para la cadena resultante
                                          // 'i' se incrementa utilizando el operador de postincremento i++	
	ret = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1); // segun el tamano calculado asigna memoria para la cadena resultante 'ret'
	tmp = ft_strcat(ret, strs[0]); // se inicializa con la dirección de memoria de 'ret'

	i = 1;
	while (i < size) // en cada loop la string 'sep' se concatena a string actual 'tmp' utilizando 'ft_strcat'
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]); // luego, la cadena 'strs[i]' se concatena a la cadena actual 'tmp' utilizando 'ft_strcat'
		                                 // después de cada concatenación, el puntero 'tmp' se actualiza para apuntar al nuevo final de la string resultante
	}
	*tmp = 0; // agrega el caracter nulo al final de la cadena resultante
	return (ret); // devuelve el puntero 'ret', que apunta a la string resultante que contiene todas las cadenas juntas, pero separadas por 'sep'
}
#include <stdio.h>

int main()
{
    char *strings[] = {"Hello", "world", "we", "are", "here", "yet!"};
    char *separator = "000";
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    char *result = ft_strjoin(num_strings, strings, separator);

    printf("Concatenated result:\n%s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}
