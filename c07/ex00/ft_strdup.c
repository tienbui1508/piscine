/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:47:05 by dbui              #+#    #+#             */
/*   Updated: 2023/02/07 13:47:07 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)(malloc(len * sizeof(char) + 1));
	if (!str)
		return (0);
	else
	{
		while (i < len)
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

/* //test ex00
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "  Test ex00  ";
	char *expected;
	char *output;

	expected = strdup(str);
	output = ft_strdup(str);
	printf("--------------Testing ex00--------------\n");
	printf("Expected:\n|%s|\n", expected);
	printf("Output:\n|%s|\n", output);
	return 0;
} */
