/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:49:20 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 18:34:57 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int numb) // esta función calcula la raíz cuadrada entera de numb
{
	int	sqrt_exp; // variable que itera a través de los valores de las raíces cuadradas posibles

	sqrt_exp = 1; // iniciamos su valor a 1, punto de partida para buscar la raíz cuadrada
	if (numb > 0) // primera condicion, si numb es mayor que 0 pasa al loop. Es para assegurar q solo se calcule la raíz cuadrada si el número es positivo
	{
		while (sqrt_exp * sqrt_exp <= numb) // loop  mientras (el cuadrado de sqrt_exp) sea menor o igual al valor de 'numb' 
		{
			if (sqrt_exp * sqrt_exp == numb) // si (el cuadrado de sqrt_exp) es = 'numb', se ha encontrado la raíz cuadrada exacta y se devuelve 'sqrt_exp'
				return (sqrt_exp);
			if (sqrt_exp > 46340) // si 'sqrt_exp' supera el valor de 46340, esto evita posibles desbordamientos en el cálculo.
						          // un número con una raíz cuadrada superior a 46340 tendrá un cuadrado mayor que el valor máximo representable por un int
				return (0);
			sqrt_exp++; // aumenta en 1 en cada iteracion del loop
		}
	}
	return (0);
}

#include <stdio.h>

int main()
{
    int num = 7;

    int sqrt_result = ft_sqrt(num);

    if (sqrt_result == 0)
        printf("\nOhhhhhhh %d is an irregular number :(\n", num);
    else
        printf("Yeah!!! The square root of %d is %d :)\n", num, sqrt_result);

    return 0;
}
