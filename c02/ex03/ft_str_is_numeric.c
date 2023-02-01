/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:23:07 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:23:08 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/* //test ex03 int	ft_str_is_numeric(char *str)
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%i\n", ft_str_is_numeric(""));  //1
    printf("%i\n", ft_str_is_numeric("1234567890987654321"));  //1
    printf("%i\n", ft_str_is_numeric("Hello"));  //0
    printf("%i\n", ft_str_is_numeric("!@#"));  //0

	return (0);
} */
