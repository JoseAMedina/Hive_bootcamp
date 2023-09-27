/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:08:54 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/28 09:27:40 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[]) // argc (argument counter) and argv (argument vector)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc) // argc: Check argc is non-zero, as an argument counter, and if it is zero, 
		                               // means no arguments were supplied on the command line
	{
		ft_putchar (argv[0][i]); // prints the character at position 'i' of the first argument (argv[0])
                                // increments the value of 'i' by 1 to advance to the next character in the string
			i++;
	}
	ft_putchar ('\n'); // prints a newline character so that the output is separated visually
	return (0);
}

// this program takes the first argument passed on the command line and prints it character by character to standard output, 
// followed by a line break. If no arguments are provided on the command line, no printing will be done
