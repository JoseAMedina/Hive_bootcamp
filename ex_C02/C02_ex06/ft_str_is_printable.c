/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:32:34 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/17 15:40:36 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 31) && (str[i] < 127))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	int isprint;
	char a[] = "nsghs668\n9$^%&())";
	isprint = ft_str_is_printable(a);
	printf("%d\n", isprint);
}

