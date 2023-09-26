/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:50:31 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/27 09:37:10 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int base, int pow) // dos argumentos: 'base' el número base, y 'pow' exponente al que se eleva el número numb
{
	int	rsd; // almacena el resultado de elevar 'base' a la potencia 'pow'

	rsd = base; // inicializa la variable 'rsd' con el valor de base
	if (pow < 0) // si 'pow' es menor que 0, devuelve 0 y sale
		return (0);
	if (pow == 0) // si 'pow' es igual a 0 devuelve 1 y sale
		return (1);
	while (pow > 1) // este loop continuara mientras 'pow' sea mayor que 1
	{
		rsd *= base; // actualiza 'rsd' multiplicándolo por 'base', esto calcula la potencia de 'base' elevado a la potencia 'pow'
		pow--; // decrementa el valor de pow en 1
	}
	return (rsd); // devuelve a 'rsd' (raised) el valor almacenado
}

#include <stdio.h>
#include <unistd.h>

int main()
{
    int base = 2;
    int power = 4;

    int raised = ft_iterative_power(base, power);

    printf("%d raised to the power of %d is %d\n", base, power, raised);

    return 0;
}
