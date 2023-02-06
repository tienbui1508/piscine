/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:56:56 by dbui              #+#    #+#             */
/*   Updated: 2023/02/06 15:56:57 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print a character
void	put_char(char c)
{
	write(1, &c, 1);
}

//print a string
void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
	put_char('\n');
}

//swap pointers of 2 strings
void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str2;
	*str2 = *str1;
	*str1 = temp;
}

//compare 2 strings
int	compare(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac - 1)
		{
			j = i + 1;
			while (j < ac)
			{
				if (compare(av[i], av[j]) > 0)
					swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (i < ac)
		{
			print_str(av[i]);
			i++;
		}
	}
	return (0);
}
