/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:51:10 by dbui              #+#    #+#             */
/*   Updated: 2023/02/05 18:51:11 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (true);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	int	i;

	i = 0;
	number = 0;
	while (ft_isspace(str[i]) && str[i] != '\0')
		i++;
	sign = 1;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number *= sign;
	return (number);
}

/* //test ex03
#include <stdio.h>
int	main(int ac, char **av)
{
	printf("-----------Testing ex03-----------\n");
	if (ac == 2)
	{
		printf("%i", ft_atoi(av[1]));
	}
	return (0);
} */
