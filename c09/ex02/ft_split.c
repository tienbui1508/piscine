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

//check if a character belongs to charset
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

//count the number of words to be splitted
int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && char_is_charset(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !char_is_charset(*str, charset))
			str++;
	}
	return (count);
}

//get the length of a word
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

//create a word from the original string
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

//split the string and create an array of words
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
		while (*str && !char_is_charset(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}

/* //test ex02
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "This is a string to be split";
    char *charset = " ";
    char **result = ft_split(str, charset);
    int i = 0;

	printf("\n-----Test 1----\n");
    while (result[i] != NULL)
    {
        printf("|%s|\n", result[i]);
        i++;
    }
    free(result);

	printf("\n-----Test 2----\n");
	str = "cCu2ggnOiODP3Zlborv    qpUuuWf MVynQ";
    charset = "qtN7k82r";
	result = ft_split(str, charset);
    i = 0;
    while (result[i] != NULL)
    {
        printf("|%s|\n", result[i]);
        i++;
    }
    free(result);

	printf("\n-----Test 3----\n");
	str = "ht6Ds4hXr7SI2oY        G1cQLg4nOdyw iQztXqoNVBFGCHArA9bN";
    charset = "jeoF";
	result = ft_split(str, charset);
    i = 0;
    while (result[i] != NULL)
    {
        printf("|%s|\n", result[i]);
        i++;
    }
    free(result);
    return 0;
}

 */
