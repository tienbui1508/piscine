/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:40:47 by dbui              #+#    #+#             */
/*   Updated: 2023/01/29 19:40:49 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	 ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size /2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 -i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
