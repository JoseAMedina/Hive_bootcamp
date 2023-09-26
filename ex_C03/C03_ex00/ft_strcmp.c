/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:02:06 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/17 13:05:09 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}


#include <stdio.h>

int main()
{
	printf("(%d)""----Equal strings", ft_strcmp("Hello", "Hello"));
	printf("\n(%d)""----String one bigger than string two", ft_strcmp("Hello", "He"));
	printf("\n(%d)""----String one smaller than string two\n", ft_strcmp("He", "Hello"));
}

