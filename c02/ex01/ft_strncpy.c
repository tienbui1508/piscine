/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:41:54 by dbui              #+#    #+#             */
/*   Updated: 2023/02/03 22:02:28 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* //test ex01 char    *ft_strncpy(char *dest, char *src, unsigned int n);
#include <stdio.h>
#include <string.h>
int main(void)
{
    char dest[] = "destination should be longer";
    char src[] = "the source";

    printf("Test 1 Expected output:\n");
    printf("%s\n", strncpy(dest, src, 7));
    printf("Test 1 Output:\n");
    printf("%s\n", ft_strncpy(dest, src, 7));

    printf("Test 2 Expected output:\n");
    printf("%s\n", strncpy(dest, src, 20));
    printf("Test 2 Output:\n");
    printf("%s\n", ft_strncpy(dest, src, 20));

	return (0);
} */
