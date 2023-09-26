/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:08:15 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 10:10:00 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int base, int pow)
{
	int	rsd; // almacena el valor de 'base' y se utilizará para realizar cálculos

	rsd = base; // inicializa 'rsd' con el valor de base
	if (rsd > rsd * base) // si el valor de 'rsd' es mayor que 'rsd * base, devuelve 0 y sale. Esto verifica desbordamientos potenciales
		return (0);
	else if (pow > 1) // si 'pow' es mayor que 1
		return (rsd * ft_recursive_power(rsd, pow - 1)); // realiza una llamada recursiva a 'ft_recursive_power'. 
	                                                     // Multiplica 'rsd' por (el resultado de la llamada recursiva con 'power' reducido en 1)
	else if (pow == 0) // si ninguno de los 'if' anteriores se cumple, verifica si 'pow' es igual a 0
		return (1); // devuelve 1 y sale
	else if (pow < 0) // si ninguno de los 'if' anteriores se cumple, verifica si 'pow' es menor que 0 (negative)
		return (0); // devuelve 0 y sale
	else
		return (rsd); // si ninguna de las condiciones anteriores se cumple, significa que 'pow' debe ser igual a 1 y devuelve el valor a 'rsd'
}

#include <stdio.h>

int main()
{
    int base = 2;
    int power = 4;

    int raised = ft_recursive_power(base, power);

    printf("%d raised to the recursive power of %d is %d\n", base, power, raised);
    return 0;
}

