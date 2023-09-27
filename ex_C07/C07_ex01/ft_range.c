/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmedin <josmedin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:34:19 by josmedin          #+#    #+#             */
/*   Updated: 2023/08/31 12:05:35 by josmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // the goal of this function is to create an array of integers containing a range of values from 'min to max - 1'
#include <stdlib.h>

int *ft_range(int min, int max) // two integer defined parameters 'min and max'
{
	int *tab; // pointer to an integer (used to hold the dynamically allocated array)
	int i; // used for looping

	if (min >= max) // if this condition is true, the range is invalid, so the function returns 'NULL' to indicate failure
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min)); // allocates memory for an 'array of integers' 
	                                                // the memory block size is calculated as (max - min) * sizeof(int) bytes
													// the result of the malloc function call is cast to an int* pointer and assigned to the tab variable
	if(tab == NULL)
		return (NULL);
	i = 0;
	while (min <= max) // loop continues until 'min' reaches the value of 'max'	
	{
		tab[i] = min; // fills the dynamically allocated array tab with integer values starting from 'min' and incrementing by 1 each time
		i++;
		min++; // during each iteration, the current value of 'min is assigned to the current element of the 'tab array at index i', 
		       // and both 'i' and 'min' are incrementedZZ
}
	return (tab); // once the loop completes, returns the pointer tab, pointing to the 'dynamically allocated array' that now holds the 'range of integers'
}

#include <stdio.h>

int main()
{
    int min = 5;
    int max = 10;
    int *result = ft_range(min, max);

    if (result == NULL)
    {
        printf("Error: min is greater than or equal to max\n");
        return 1;
    }
	
	else
		printf("%d ", result);
    }
    printf("\n");

    return 0;
}
