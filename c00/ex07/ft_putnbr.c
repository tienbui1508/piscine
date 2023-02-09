/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:17:10 by dbui              #+#    #+#             */
/*   Updated: 2023/01/28 21:41:47 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			putchar('-');
			nb = -nb;
		}
		if (nb < 10)
			putchar(nb % 10 + '0');
		else
		{
			ft_putnbr(nb / 10);
			putchar(nb % 10 + '0');
		}
	}
}
