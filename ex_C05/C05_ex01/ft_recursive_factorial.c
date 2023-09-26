/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:48:16 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 09:05:18 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int numb)
{
	if (numb < 0) // loop de control, comprueba si el valor de numb es menor que 0
		return (0);
	else if (numb <= 1) // si el if anterior no se cumple, se verifica si el valor de numb es menor o igual a 1
		return (1); // si numb es menor q 1 o 1), la función devuelve 1 y sale
	else
		return numb * ft_recursive_factorial(numb - 1); // la función se llama a sí misma con un argumento de 'numb - 1' 
	                                                  // es una llamada recursiva que calcula el factorial del número numb
}

#include <stdio.h>

int main()
{
    int number = 5;
    
    printf("Recursive factorial of %d is %d\n", number, ft_recursive_factorial(number));
}
