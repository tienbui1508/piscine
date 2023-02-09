/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:09:16 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:09:17 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft07_is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!ft07_is_prime(nb))
		nb++;
	return (nb);
}

/* //test ex07
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex07------------\n");
	printf("%d -> %d\n", -1665, ft_find_next_prime(-1665));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 343041, ft_find_next_prime(343041));
	printf("%d -> %d\n", 278358, ft_find_next_prime(278358));
	printf("%d -> %d\n", 367625, ft_find_next_prime(367625));
	printf("%d -> %d\n", 244763, ft_find_next_prime(244763));
	printf("%d -> %d\n", 262173, ft_find_next_prime(262173));
}
 */
