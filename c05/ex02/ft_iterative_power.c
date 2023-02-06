/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:08:01 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:08:02 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (nb == 0 && power == 0)
		pow = 1;
	else if (power < 0)
		pow = 0;
	else if (power == 0)
		pow = 1;
	else
	{
		while (power > 0)
		{
			pow *= nb;
			power--;
		}
	}
	return (pow);
}

/* //test ex02
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex02------------\n");
	printf("Expected:\n1|0|1|0|32|-128\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i\n",
	ft_iterative_power(0 , 0),
	ft_iterative_power(0 , 10),
	ft_iterative_power(10 , 0),
	ft_iterative_power(42 , -42),
	ft_iterative_power(2 , 5),
	ft_iterative_power(-2 , 7));
} */
