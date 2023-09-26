/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2023/08/21 17:06:39 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/24 15:08:09 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb) /* toma un número entero como argumento y lo imprime en la salida estándar utilizando la función ft_putchar */
{
	unsigned int number; /* declara la variable number / tipo unsigned int para almacenar el valor absoluto del número que se va a imprimir */

	if (nb < 0) /* verify if the number is negative */
	{
		ft_putchar('-'); /* if is negative print a minus */
		number = nb * -1; /* Calculates the negative number absolut value multiplying by -1 and store it in 'number' variable */
	}
	else
		number = nb; /* if the number is positive only store it in 'number' variable */
	if (number >= 10) /* if the number is bigger than 10 call the recursive function ft_putnbr dividing by 10 to be able to print digits in invers order */
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48); /* Print the last digit of the number form it in his ASCII representation adding 48 (ASCII code of '0') 
									 to the residual division result of the number by 10 */
}

int main()
{
	int nmb = 9292992;
	ft_putnbr(nmb);
	return(0);
}
