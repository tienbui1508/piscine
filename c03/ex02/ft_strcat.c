/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:27 by dbui              #+#    #+#             */
/*   Updated: 2023/02/04 14:55:28 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_strcat(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = len_strcat(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* //test ex02
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest1_02[42] = "Hello 1+";
	char src1_02[] = "World 2";
	char dest2_02[42] = "Hello 1+";
	char src2_02[] = "World 2";
	printf("Expected:\n");
	printf("%s\n", strcat(dest1_02, src1_02));
	printf("Output:\n");
	printf("%s\n", ft_strcat(dest2_02, src2_02));

	return 0;
} */
