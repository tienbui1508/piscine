/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:14:55 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:14:57 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/* //test ex00 char *ft_strcpy(char *dest, char *src)
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "the source";
    char dest[] = "dest should be longer";
    printf("%s\n", strcpy(dest, src));
    printf("%s\n", ft_strcpy(dest, src));
	return (0);
} */
