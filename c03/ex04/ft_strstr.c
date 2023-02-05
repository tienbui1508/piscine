/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:39 by dbui              #+#    #+#             */
/*   Updated: 2023/02/04 14:55:40 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* //test ex04
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "42 Adelaide week 2 piscine";
	char find[] = "lai";
	printf(":%s:\n", strstr(str, find));
	printf(":%s:\n", ft_strstr(str, find));
} */