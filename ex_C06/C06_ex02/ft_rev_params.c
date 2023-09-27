/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:53:29 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/28 09:45:52 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str) // pointer to a character (char *) as argument
{
	while (*str) // loop is executed as long as the value pointed to by 'str' is not the null character ('\0')
		write (1, str++, 1); // prints the character pointed to by 'str' on standard output, and increments it to point to the next character
	write (1, "\n", 1); // after printing all the characters in the string, a newline is added
}

int	main(int argc, char *argv[]) // command line argument counter (argc) and argument vector (argv)
{
	while (--argc != 0) // as long as argc is not zero, the pre-decrement operator (--argc) decrements 'argc' by 1 before comparing its value
		ft_putstr (argv[argc]); // call ft_putstr to print the argument at position 'argc'
}
