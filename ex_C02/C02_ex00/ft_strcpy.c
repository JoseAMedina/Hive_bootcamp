/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:17:12 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/30 17:22:52 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str_src[]	= "Hello";
	char str_dest[]	= "Hola como estas?";
	
	printf("The source '%s' is stored at destinity (Hola!), and now is", ft_strcpy(str_dest, str_src));
	printf(" '%s' too :)\n", str_dest);
	return (0);
}
