/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:23:27 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:23:29 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}

/* //test ex05 int	ft_str_is_uppercase(char *str)
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%i\n", ft_str_is_uppercase(""));  //1
    printf("%i\n", ft_str_is_uppercase("UPPERCASE"));  //1
    printf("%i\n", ft_str_is_uppercase("Hello"));  //0
    printf("%i\n", ft_str_is_uppercase("!@#"));  //0

	return (0);
}
 */
