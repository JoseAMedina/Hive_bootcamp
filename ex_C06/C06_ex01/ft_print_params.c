/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:27:07 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/28 09:37:30 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv) // an argument counter (argc) and a character pointer vector (argv)
{
	int	i; // used to track the current position within a string in an argument
	int	j; // used to track the different arguments passed to the program

	j = 1; // j loops through the command line arguments (we omit argv[0] which is the name of the program itself)
	while (j < argc) // outer loop that runs as long as 'j' is less than the total number of arguments (argc)
	{	
		i = 0;
		while (argv[j][i] != '\0') // inner loop iterates through to the end of the string (\0) in the argv[j] argument
		{
			ft_putchar(argv[j][i]); // call 'ft_putchar' to print the character at position 'i' of the argv[j] argument			
			i++; // 'i' is incremented to move to the next character in the same argument
		}
		ft_putchar('\n');
		j++; // increments j to move to the next argument on the command line
	}
	return (0);
}

// Este programa toma varios argumentos desde la línea de comandos y los imprime uno por uno, separando los caracteres de cada argumento 
// con saltos de línea
