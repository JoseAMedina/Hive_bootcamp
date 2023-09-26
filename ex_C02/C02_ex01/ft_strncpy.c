/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:25:14 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/24 18:15:16 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[] = "Freya";
	char src[] = "Freya is pretty and small";
	unsigned int n = 10;

	printf("'src' has the value %s and is stored at %p\n", src, (void *)&src);
	printf("'dest' has the value %s and is stored at %p\n", dest, (void *)&dest);
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}	

