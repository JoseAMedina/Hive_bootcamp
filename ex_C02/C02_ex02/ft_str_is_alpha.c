/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:07:11 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/17 15:21:46 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{	
			return (0);
		}
		i++;
	}
	return (1);
}


#include <stdio.h>

int    main()
{
    int is_alpha;
    char a[] = "afafafafJ6578JJJJSL";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}

