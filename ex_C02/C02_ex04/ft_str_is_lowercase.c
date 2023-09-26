/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:17:29 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/17 15:32:46 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int    main(void)
{
    int islower;
    char a[] = "fgfggfgYTEUfgdfgdfgdgdg";
    islower = ft_str_is_lowercase(a);
    printf("%d\n", islower);
}

