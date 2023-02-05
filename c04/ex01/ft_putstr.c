/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:50:53 by dbui              #+#    #+#             */
/*   Updated: 2023/02/05 18:50:54 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* //test ex01
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1_01[] = "This is string 1";
	char str2_01[] = "one two three";
	printf("-----------Testing ex01-----------\n");
	printf("Expected:\n");
	printf("%s\n", str1_01);
	printf("%s\n", str2_01);
	printf("Output:\n");
	ft_putstr(str1_01);
	printf("\n");
	ft_putstr(str2_01);
	return (0);
} */
