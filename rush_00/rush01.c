/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:37:00 by josmedin          #+#    #+#             */
/*   Updated: 2023/09/25 11:14:43 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((px == 1 && py == 1) || (px == x && py == y && x > 1 && y > 1))
				ft_putchar(47);
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar(42);
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar(42);
			else if ((px == 1 && py == y) || (px == x && py == 1))
				ft_putchar(92);
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 1;
		ft_putchar('\n');
	}
}
