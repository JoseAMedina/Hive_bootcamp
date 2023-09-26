/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:20:30 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/24 11:36:05 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int value;
	int sign;

	i = 0;
	value = 0;
	sign = 1; 
	while (str[i] && ((str[i] > 8 && str[i] <14) || str[i] == 32))
	{	
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return value * sign;
}

#include <stdio.h>

int ft_atoi(char *str);

int main()
{
    char input[100];  // Espacio para almacenar el input
    printf("Enter input:");
    scanf("%s", input);  // Lee el input desde la terminal
    int result = ft_atoi(input);

    printf("Result: %d\n", result);
    return (0);
}






