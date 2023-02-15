/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:20:01 by dbui              #+#    #+#             */
/*   Updated: 2023/02/15 23:20:02 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!char_is_charset(*str, charset)
			&& char_is_charset(*(str + 1), charset))
			count++;
		str++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (*str && !char_is_charset(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(str, charset);
	word = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (strs == NULL)
		return (0);
	while (*str)
	{
		while (*str && char_is_charset(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = ft_word(str, charset);
			i++;
		}
		str += word_len(str, charset);
	}
	strs[i] = 0;
	return (strs);
}

/* #include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(void)
{
    char *str = "This is a string to be split";
    char *charset = " ";
    char **result = ft_split(str, charset);

    int i = 0;
    while (result[i])
    {
        printf("|%s|\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);
    return 0;
}
 */
