/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:50:32 by dbui              #+#    #+#             */
/*   Updated: 2023/02/05 18:50:33 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* //test ex00
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1_00[] = "This is string 1";
	char str2_00[] = "one two three";
	printf("-----------Testing ex00-----------\n");
	printf("Expected:\n%lu\n%lu\n", strlen(str1_00), strlen(str2_00));
	printf("Output:\n%i\n%i\n", ft_strlen(str1_00), ft_strlen(str2_00));
	return (0);
} */
