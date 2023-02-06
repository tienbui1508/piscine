/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:07:46 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:07:47 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		fac = 0;
	else if (nb > 0)
		fac = nb * ft_recursive_factorial(nb - 1);
	return (fac);
}

/* //test ex01
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex01------------\n");
	printf("Expected:\n1|0|1|24|3628800\n");
	printf("Output:\n%i|%i|%i|%i|%i\n",
	ft_recursive_factorial(0),
	ft_recursive_factorial(-42),
	ft_recursive_factorial(1),
	ft_recursive_factorial(4),
	ft_recursive_factorial(10));
} */
