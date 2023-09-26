/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:39:17 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 11:11:06 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index) // la función quiere calcular el número en la secuencia de Fibonacci en la posición 'index'
{
	int	val; // almacena el valor del número en la secuencia de Fibonacci en la posición 'index'

	if (index < 0)
		return (-1); // si 'index' es menor que 0, significa que 'index' es inválido para la secuencia de Fibonacci y la función devuelve -1 y sale
	if (index == 0)
		return (0); // si 'index' es igual a 0, la función devuelve 0 y sale
	if (index == 1) // si 'index' es igual a 1, lafunci'on devuelve 1 y sale
		return (1);
	else // cuando 'index' es mayor que 1 y no es 0 ni 1
	{
		val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2); // llamada recursiva a la función 'ft_fibonacci' 
		                                                         // se obtiene el número en la posición index - 1 y index - 2
																 // Luego, estos dos valores se suman y se almacenan en la variable val.
		return (val);
	}
}

#include <stdio.h>

int main()
{
    int index1 = 8;
   	int index2 = -5; // 

    int result1 = ft_fibonacci(index1);
	int result2 = ft_fibonacci(index2);

    if (result1 == -1)
        printf("Index %d is an invalid Fibonacci index :(\n", index1);
	else
		printf("Fibonacci number at index %d is %d :)\n", index1, result1);

	if (result2 == -1)
		printf("Index %d is an invalid Fibonacci index :(\n", index2);
    else
		printf("Fibonacci number at index2 %d is %d :)\n", index2, result2);
    return 0;
}
