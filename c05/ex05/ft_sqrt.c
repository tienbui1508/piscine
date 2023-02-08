/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:08:53 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:08:55 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (sqrt * sqrt < nb && sqrt * sqrt <= INT_MAX)
			sqrt++;
		if (sqrt * sqrt > nb)
			sqrt = 0;
		return (sqrt);
	}
}

/* //test ex05
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex05------------\n");
	printf("Expected:\n0|1|3|10|42|0|0\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n",
	ft_sqrt(0),
	ft_sqrt(1),
	ft_sqrt(9),
	ft_sqrt(100),
	ft_sqrt(1764),
	ft_sqrt(24),
	ft_sqrt(42));
} */
