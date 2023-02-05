/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:22 by dbui              #+#    #+#             */
/*   Updated: 2023/02/04 14:55:23 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}

/* //test ex01
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1_01[] = "String a";
	char str2_01[] = "String z";
	printf("Expected:\n");
	printf("-1\n0\n1\n");
	printf("Output:\n");
	printf("%i\n", ft_strncmp(str1_01, str2_01, 8));
	printf("%i\n", ft_strncmp(str1_01, str2_01, 6));
	printf("%i\n", ft_strncmp(str2_01, str1_01, 8));

	return 0;
} */
