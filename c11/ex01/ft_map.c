/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:12:32 by dbui              #+#    #+#             */
/*   Updated: 2023/02/16 16:12:33 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(length * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
	}
	return (array);
}
