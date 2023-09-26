/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:46 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/21 16:00:49 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int size = 0;

	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int main(void)
{
	char str[] = "I have three handsome kids";
	char to_find[] = "k";

	printf("Source : %s\n", str);
	printf("Text to serch : %s\n", to_find);
	printf("Search: %s\n", ft_strstr(str, to_find));
	return (0);
}
