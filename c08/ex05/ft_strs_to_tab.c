/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:27:17 by dbui              #+#    #+#             */
/*   Updated: 2023/02/12 20:27:18 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

//get the length of a string
int	len_str(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

//transform a string into a structure
t_stock_str	str_to_struct(char *src)
{
	int			i;
	int			len;
	char		*copy;
	t_stock_str	stock;

	len = len_str(src);
	copy = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	stock.size = len;
	stock.str = src;
	stock.copy = copy;
	return (stock);
}

//transform each element of av into a structure
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i] = str_to_struct(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

/* //test ex04
#include <stdio.h>
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index <= argc)
	{
		printf("av[%d]\n", index);
		printf("\t| original : |%s| @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : |%s| @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
} */
