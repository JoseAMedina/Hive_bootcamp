/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 08:37:07 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/30 09:42:59 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // the standard C library for using dynamic memory allocation functions like malloc
#include <sys/errno.h> // library system calls and error numbers

char	*ft_strdup(char *src) // takes a pointer to a character string 'src' and returns a pointer to a newly duplicated string
{
	int		len; // declares a variable 'len' of type 'long long' to store the length of the 'src string'
	char	*sto; // used to store the address of the allocated memory for the duplicated string

	len = 0;
	while (src[len]) // while is not null (end of the string), this is used to calculate the length of the 'src string'
		++len; // increments the 'len variable' to keep counting characters
	sto = (char *)malloc(len + 1); // allocates dynamic memory using 'malloc' for the 'duplicated string' 
	                              // length is set as 'len + 1' to accommodate the null character at the end
	if(errno == ENOMEM || sto == 0)
		return (0);
	sto[len] = 0; // sets the null character ('\0') at the end of the 'duplicated string'
	while (--len >= 0) // while 'len' is greater than or equal to 0, copies characters from 'src' to the duplicate in reverse order
		sto[len] = src[len]; // copies the current character from 'src' to the 'duplicate' at the corresponding position
	return (sto);
}

#include <stdio.h>

int main()
{
    char original[] = "Hello, world I'm here yet!";
    char *duplicate;

    // Call ft_strdup to create a duplicate of the original string
    duplicate = ft_strdup(original);

    // Print the original and duplicated strings
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);

    // Free the dynamically allocated memory for the duplicate
    free(duplicate);

    return 0;
}

