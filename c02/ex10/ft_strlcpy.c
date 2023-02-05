/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:24:19 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:24:20 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0')
		{
			if (i < size - 1)
				dest[i] = src[i];
			else if (i == size - 1)
				dest[i] = '\0';
		i++;
		}
		dest[i] = '\0';
	}
	return (i);
}

/* // test ex10
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "source1";
	char dest[] = "destination";
    // printf("%s | %d\n", dest, strlcpy(dest, src, (unsigned long) 7));
    printf("%s | :%d:\n", dest, ft_strlcpy(dest, src, 7)); //source | 7
    printf("%s | :%d:\n", dest, ft_strlcpy(dest, src, 3)); //so | 7
	return (0);
} */
