/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:31:37 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 17:39:45 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i; // realiza el bucle y cálculos dentro de la función

	if (nb < 0)
		return (0); // si 'nb' es menor que 1, la función devuelve 0 y sale
	if (nb == 0)
		return (1);	
	i = nb; // inicializa 'i' con el mismo valor que' nb'
	while (i > 1) // el loop continuará mientras el valor de 'i' sea mayor que 1
	{
		nb = nb * (i - 1); // actualiza nb multiplicándolo por 'i - 1', para calcular el factorial
		i--; // decrementa el valor de 'i' en cada iteración
	}
	return (nb); // cuando 'i' es igual a 1, devuelve el valor, que será el factorial de 'nb'
}

#include <stdio.h>

int main()
{
    int numb = -4;
    printf("Factorial of %d is %d  :)\n", numb, ft_iterative_factorial(numb));
    return 0;
}
