/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:09:06 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:09:07 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else
	{
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

/* //test ex06
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex06------------\n");
	printf("Expected:\n0|0|0|0|1|1|1\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n",
	ft_is_prime(-42),
	ft_is_prime(0),
	ft_is_prime(1),
	ft_is_prime(42),
	ft_is_prime(2),
	ft_is_prime(89),
	ft_is_prime(4219));
} */
