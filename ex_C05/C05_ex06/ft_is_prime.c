/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:04:40 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 11:35:31 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int numb)
{
	int	i; // contador en el bucle de verificación 
	int	prime; // se utilizará para contar si hay divisores del número numb

	i = 2;
	prime = 0;
	if (numb < 2) // si es menor que 2, no es un número primo, ya que los números primos son mayores o iguales a 2
		return (0);
	if (numb == i) // si es igual a 2, significa que es un número primo, ya que 2 es el único número primo par
		return (1);
	while (i <= numb / 2) // loop mientras 'i' es menor o igual a la mitad de numb. La comprobación hasta la mitad del número 
		                  // es suficiente porque ningún divisor de 'numb' puede ser mayor que su mitad
	{
		if (numb % i == 0) // se verifica si numb es divisible por i (es decir, si numb modulo i es igual a 0)
			               // si es divisible, incrementa 'prime' y 'i' en cada iteración para verificar los divisores potenciales
			prime++;
		i++;
	}
	if (prime == 0) // verifica si prime sigue siendo 0, es asi al no encontrar divisores de numb aparte de 1 y sí mismo. Numb es primo  
		return (1);
	else
		return (0);
}

#include <stdio.h>

int main()
{
    int numb;

    printf("Enter your number: ");
    scanf("%d", &numb);

    if (ft_is_prime(numb))
        printf("%d is a prime number :)\n", numb);
    else
        printf("%d is not a prime number :(\n", numb);

    return 0;
}
