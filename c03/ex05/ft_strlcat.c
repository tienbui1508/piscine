/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:46 by dbui              #+#    #+#             */
/*   Updated: 2023/02/04 14:55:47 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	i;

	len_src = 0;
	len_dest = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0')
		len_dest++;
	i = 0;
	while (i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}

/* //test ex05
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "a test!"; //7
    char dest[] = "This is                          "; //34
	int output = ft_strlcat(dest, src, 34); //n = sizeof(dest)
	int expected = strlcat(dest, src, 34);
	printf("Expected return value: %i\n", expected);
	printf("Expected string: %s\n", expected);
	printf("Actual return value: %i\n", output);
	return 0;
} */
