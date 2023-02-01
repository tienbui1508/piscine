/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:23:48 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:23:50 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) >= 'a' && str[i] <= 'z')
           str[i] -= 32;
        i++;
    }
    return (str);
}

/* //test ex07 int	*ft_strupcase(char *str)
#include <stdio.h>
int main(void)
{
    char str[] = "lOwerCase 123 !@#";
	printf("%s", ft_strupcase(str));

	return (0);
} */
