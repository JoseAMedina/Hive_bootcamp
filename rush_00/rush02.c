/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:32:42 by josmedin          #+#    #+#             */
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
			if ((px == 1 || px == x) && (py == 1))
				ft_putchar('A');
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar('B');
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar('B');
			else if ((px == x || px == 1) && (py < 2 || py == y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 1;
		ft_putchar('\n');
	}
}
