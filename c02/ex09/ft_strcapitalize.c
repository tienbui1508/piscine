/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:24:11 by dbui              #+#    #+#             */
/*   Updated: 2023/02/01 22:24:12 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

//check if a character is alphanumeric
bool	is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

//capitalizes an alphanumeric character
char	uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

//lowercase an alphanumeric character
char	lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

//capitalize the first letter of each word and transform all other letters to lowercase
char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && is_alphanumeric(str[i - 1]))
			str[i] = lowercase(str[i]);
		else if (is_alphanumeric(str[i]) && !is_alphanumeric(str[i - 1]))
			str[i] = uppercase(str[i]);
		i++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));

	return (0);
} */
