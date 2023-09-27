/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:26:15 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/30 13:42:45 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int ft_ultimate_range(int **range, int min, int max) // tres argumentos: un 'puntero a un puntero range', y dos enteros 'min' y 'max'
{
	int i;
	int *tab;

	if (min >= max) // si 'min' es >=  max, asigna NULL al puntero al que apunta 'range', no se puede crear un rango válido
	{
		*range = (void *)0;
		return (0); // devuelve 0, no hay elementos en el 'range' y no se pudo crear el arreglo
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min)); // asigna memoria dinámica al arreglo usando 'malloc' C
	                                                // calcula el size necesario * el tamaño de un int (sizeof(*tab)) * cantidad de elementos en el rango (max - min)
	i = 0;
	while (min < max) // loop mientras 'min' sea menor que 'max'
	{
		tab[i] = min; // asigna el valor actual de 'min' a la posición 'i' del arreglo 'tab'
		i++; // incremento contador 'i' para avanzar a la siguiente posición en el arreglo
		min++; // incremento 'min' para avanzar al siguiente valor en el rango
	}
	*range = tab; // después de crear el arreglo y llenarlo con valores, asigna el puntero 'tab' al puntero 'range'
	              // esto permite que al arreglo creado 'range' se pueda acceder desde el código que llamó a la función
	return (i); // devuelve la cantidad de elementos en el rango, que es equivalente a la cantidad de iteraciones realizadas en el bucle while
}
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
    int min = 5;
    int max = 10;
    int *result;
    int size = ft_ultimate_range(&result, min, max);

    if (result == NULL)
    {
        printf("Error: min is greater than or equal to max\n");
        return 1;
    }

    printf("Resulting array (size %d):\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

     free(result);

    return 0;
}
