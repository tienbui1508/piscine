/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:23:59 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:24:01 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) >= 'A' && str[i] <= 'Z')
           str[i] += 32;
        i++;
    }
    return (str);
}

/* //test ex08 int	*ft_strlowcase(char *str)
#include <stdio.h>
int main(void)
{
    char str[] = "lOwerCaSe 123 !@#";
	printf("%s", ft_strlowcase(str)); //lowercase 123 !@#%

	return (0);
} */

