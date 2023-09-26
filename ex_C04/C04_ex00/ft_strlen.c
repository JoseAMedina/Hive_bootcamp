/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:28:55 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/28 08:26:45 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_strlen(char *s) // ZZesta funcion devuelve el num de caracteres que predecen al null\0*/
{
 	int i; // se utiliza para llevar un seguimiento de la posición actual en la string  mientras itera
		
	i = 0;
	while (s[i] != '\0') // Este loop Mientras no sea el final '\0'  suma una unidad para ir al siguiente elemento
		i++; // Estee incremento nos permite avanzar a traves de la string, caracter por caracter
	return (i); // recorrida la string, hasta '\0', la longitud se almacena en 'i' y se devuelve a la funcion
}

#include <unistd.h>

int main() 
{
    char *string = "Hello, world!";
    int length = ft_strlen(string);

    char length_str[20];
    int length_str_len = snprintf(length_str, sizeof(length_str), "%d\n", length);

    write(1, "Length of string: ", 18);
    write(1, length_str, length_str_len);

    return 0;
}
