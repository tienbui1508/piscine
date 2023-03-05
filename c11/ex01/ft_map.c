/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:12:32 by dbui              #+#    #+#             */
/*   Updated: 2023/02/16 16:12:33 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(length * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}

/* //test ex01
#include <stdio.h>
#include <stdlib.h>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int *result = ft_map(arr, 5, &square);

    if (result == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
} */
