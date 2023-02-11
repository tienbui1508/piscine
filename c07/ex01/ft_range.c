/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:47:21 by dbui              #+#    #+#             */
/*   Updated: 2023/02/07 13:47:22 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*array;

	len = max - min;
	if (min >= max)
		return (0);
	array = (int *)(malloc(len * sizeof(int)));
	if (!array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/* //test ex01
#include <stdio.h>
int main(void)
{
	int min = -4;
	int max = 2;
	int *output = ft_range(min, max);
	int i = 0;
	printf("--------------Testing ex01--------------\n");
	printf("Expected:\n-4 -3 -2 -1 0 1\n");
	printf("Output:\n");
	while (i < max - min)
	{
		printf("%i ", output[i]);
		i++;
	}
	return 0;
} */
