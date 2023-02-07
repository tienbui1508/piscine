/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:47:33 by dbui              #+#    #+#             */
/*   Updated: 2023/02/07 13:47:34 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*nums;

	len = max - min;
	nums = (int *)(malloc(len * sizeof(int)));
	if (!nums)
		return (-1);
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (i < len)
	{
		nums[i] = min + i;
		i++;
	}
	*range = nums;
	return (len);
}

/* //test ex2
#include <stdio.h>
int main(void)
{
	int min = -4;
	int max = 2;
	int *nums;
	int i = 0;
	int size = ft_ultimate_range(&nums, min, max);
	printf("--------------Testing ex02--------------\n");
	printf("Expected:\nSize = 6\n-4 -3 -2 -1 0 1\n");
	printf("Output:\nSize = %i\nArray:\n", size);
	while (i < size)
	{
		printf("%i ", nums[i]);
		i++;
	}
	return 0;
} */
