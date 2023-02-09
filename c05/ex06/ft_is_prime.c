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
		while (i <= nb / i)
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
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", -2147483647, ft_is_prime(-2147483647));
	printf("%d -> %d\n", +2147483647, ft_is_prime(+2147483647));
	printf("%d -> %d\n", 200, ft_is_prime(200));
	printf("%d -> %d\n", 201, ft_is_prime(201));
	printf("%d -> %d\n", 202, ft_is_prime(202));
} */
