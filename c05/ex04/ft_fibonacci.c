/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:08:38 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:08:39 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		fib = -1;
	else if (index == 0)
		fib = 0;
	else if (index == 1)
		fib = 1;
	else
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}

//test ex04
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex04------------\n");
	printf("Expected:\n-1|0|1|1|2|3|5|8|13|55\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i|%i|%i|%i\n", ft_fibonacci(-42), ft_fibonacci(0), ft_fibonacci(1), ft_fibonacci(2), ft_fibonacci(3), ft_fibonacci(4), ft_fibonacci(5), ft_fibonacci(6), ft_fibonacci(7), ft_fibonacci(10));
}
