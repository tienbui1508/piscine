/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:36:37 by dbui              #+#    #+#             */
/*   Updated: 2023/01/28 21:53:17 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_num(int array[], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = array[i] + '0';
		print_char(c);
		i++;
	}
	if (array[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_recursive(int array[], int n, int i)
{
	if (i == 0)
		array[0] = 0;
	else
		array[i] = array[i - 1] + 1;
	while (array[i] <= 10 - n + i)
	{
		if (i == n - 1)
			print_num(array, n);
		else
			ft_recursive(array, n, i + 1);
		array[i] = array[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_recursive(array, n, 0);
}
