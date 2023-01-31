/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:42:05 by dbui              #+#    #+#             */
/*   Updated: 2023/01/31 22:42:07 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool    is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (1);
    else 
        return (0);
}

int    ft_str_is_alpha(char *str)
{
    int i;
    int num;

    i = 0;
    num = 1;
    while (str[i] != '\0')
    {
        if (!is_alpha(str[i]))
            num = 0;
        i++;
    }
    return (num);
}
