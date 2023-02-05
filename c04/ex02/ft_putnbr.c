/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:51:01 by dbui              #+#    #+#             */
/*   Updated: 2023/02/05 18:51:02 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft02_putchar(char c)
{
	write(1, &c, 1);
}

void	print_the_number(int number)
{
	if (number > 9)
	{
		print_the_number(number / 10);
		ft02_putchar(number % 10 + '0');
	}
	else
	{
		ft02_putchar(number % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft02_putchar('-');
		print_the_number(-nb);
	}
	else
		print_the_number(nb);
}

/* //test ex02
#include <stdio.h>
int	main(void)
{
	int	num1_02 = -2147483648;
	int num2_02 = 2147483647;
	int num3_02 = -42;
	int num4_02 = 42;
	int num5_02 = 0;
	printf("-----------Testing ex02-----------\n");
	printf("Expected:\n");
	printf("%i|%i|%i|%i|%i\n", num1_02, num2_02, num3_02, num4_02, num5_02);
	printf("Output:\n");
	ft_putnbr(num1_02);
	ft02_putchar('|');
	ft_putnbr(num2_02);
	ft02_putchar('|');
	ft_putnbr(num3_02);
	ft02_putchar('|');
	ft_putnbr(num4_02);
	ft02_putchar('|');
	ft_putnbr(num5_02);

	return (0);
} */
