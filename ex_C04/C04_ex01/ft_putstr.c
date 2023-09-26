/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:14:47 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/24 14:10:44 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str) // toma un pointer a una cadena de caracteres, como argumento y no devuelve ningún valor (void). 
	                      // Esta función se utiliza para imprimir la cadena en la salida estándar
{
  while (*str) // iterara mientras el valor apuntado por el puntero 'str' no sea nulo ('\0')
    write(1, str++, 1); // 1er arg 1, es la salida estándar (usualmente la pantalla). 3er arg 1, es la cantidad de bytes a escribir, aquies 1 byte
                        // Luego, el puntero 'str' se incrementa en 1 para apuntar al siguiente carácter en la string
}

int main() 
{
	char letter[] = "Life is great";
	ft_putstr(letter);
	return(0);
}
