/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:42:05 by dbui              #+#    #+#             */
/*   Updated: 2023/02/03 22:04:21 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
//check if a character is an alphabetical character
bool	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* //test ex02 int    ft_str_is_alpha(char *str)
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "ThisWouldReturnOne";
    char str2[] = "";
    char str3[] = "This would return 0";

    printf("%i\n", ft_str_is_alpha(str1));  //1
    printf("%i\n", ft_str_is_alpha(str2));  //1
    printf("%i\n", ft_str_is_alpha(str3));  //0

	return (0);
} */
