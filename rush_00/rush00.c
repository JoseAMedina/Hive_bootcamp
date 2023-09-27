/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:42:06 by josmedin          #+#    #+#             */
/*   Updated: 2023/09/25 11:14:43 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int px;
	int py;

	px = 1;
	py = 1;
	while (py <= y)
	{
		while (px <= x)
		{
			if (px == 1 && (py < 2 || py == y))
				ft_putchar('o');
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar('-');
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar('|');
			else if (px == x && (py < 2 || py == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 1;
		ft_putchar('\n');
	}
}
