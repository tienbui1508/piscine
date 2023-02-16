/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:53:17 by dbui              #+#    #+#             */
/*   Updated: 2023/02/16 15:53:18 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_the_number(int number)
{
	if (number > 9)
	{
		print_the_number(number / 10);
		ft_putchar(number % 10 + '0');
	}
	else
	{
		ft_putchar(number % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		print_the_number(-nb);
	}
	else
		print_the_number(nb);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* //test ex00
#include <stdlib.h>
int	main(void)
{
	int	i;
	int	*tab;
	int	length;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
} */
