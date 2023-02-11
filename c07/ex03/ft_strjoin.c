/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:05:45 by dbui              #+#    #+#             */
/*   Updated: 2023/02/07 16:05:46 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//get a string length
int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//concatenate 2 strings separated by sep
char	*concat_str(char *dest, char *src)
{
	int	i;
	int	j;

	i = len_str(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

//get total length
int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	len_sep;

	i = 0;
	len = 0;
	len_sep = len_str(sep) * (size - 1);
	while (i < size)
	{
		len += len_str(strs[i]);
		i++;
	}
	len += len_sep;
	return (len);
}

//the function!
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (size == 0)
	{
		result = ((char *)malloc(sizeof(char)));
		return (result);
	}
	len = get_len(size, strs, sep);
	result = (char *)(malloc(len * sizeof(char) + 1));
	if (!result)
		return (0);
	while (i < size)
	{
		concat_str(result, strs[i]);
		if (i < size -1)
			concat_str(result, sep);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/* //test ex03
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 0;
	strs[0] = "This is string 1";
	strs[1] = "  String 2 here  ";
	strs[2] = "This is string 3";
	separator = "||";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
	return 0;
} */
