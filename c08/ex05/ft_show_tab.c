/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:27:44 by dbui              #+#    #+#             */
/*   Updated: 2023/02/12 20:27:45 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

//print a char
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//print a string
void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

//print a positive int
void	ft_putnum(int num)
{
	if (num > 9)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	else
		ft_putchar(num + '0');
}

//print one struct
void	ft_show_one(t_stock_str toshow)
{
	ft_putstr(toshow.str);
	ft_putchar('\n');
	ft_putnum(toshow.size);
	ft_putchar('\n');
	ft_putstr(toshow.copy);
	ft_putchar('\n');
}

//print all structs
void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0)
	{
		ft_show_one(par[i]);
		i++;
	}
}

/* //test ex05
#include <stdio.h>
#include "ft_strs_to_tab.c"
int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
} */
