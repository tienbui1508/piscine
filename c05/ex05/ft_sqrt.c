/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:08:53 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 14:08:55 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while ( sqrt < nb/sqrt)
			sqrt++;
		if (sqrt * sqrt > nb)
			sqrt = 0;
		return (sqrt);
	}
}

//test ex05
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex05------------\n");
  	printf("sqrt of %d is %d\n", -2405, ft_sqrt(-2405));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 1402951936, ft_sqrt(1402951936));
        printf("sqrt of %d is %d\n", 719070122, ft_sqrt(719070122));
        printf("sqrt of %d is %d\n", 85581001, ft_sqrt(85581001));
        printf("sqrt of %d is %d\n", 1849047636, ft_sqrt(1849047636));
        printf("sqrt of %d is %d\n", 1751087716, ft_sqrt(1751087716));
        printf("sqrt of %d is %d\n", 567168869, ft_sqrt(567168869));
        printf("sqrt of %d is %d\n", 173765124, ft_sqrt(173765124));
        printf("sqrt of %d is %d\n", 941392614, ft_sqrt(941392614));
        printf("sqrt of %d is %d\n", 797328169, ft_sqrt(797328169));
        printf("sqrt of %d is %d\n", 1907291574, ft_sqrt(1907291574));
}
