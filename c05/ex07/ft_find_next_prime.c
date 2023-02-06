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
	else if (nb == 2)
		return (1);
	else
	{
		while (nb % i != 0)
		{
			if (i * i > nb)
				return (1);
			i++;
		}
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	while (!ft07_is_prime(nb))
		nb++;
	return nb;
}

//test ex07
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex07------------\n");
	printf("Expected:\n2|2|5|13|43|89|149\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n", ft_find_next_prime(-42), ft_find_next_prime(0), ft_find_next_prime(5), ft_find_next_prime(13), ft_find_next_prime(42), ft_find_next_prime(89), ft_find_next_prime(142));
}
