/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:42:57 by dbui              #+#    #+#             */
/*   Updated: 2023/02/18 17:42:59 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printable(char c)
{
	write (1, &c, 1);
}

void	nonprintable(char c)
{
	write (1, "\\", 1);
	write (1, &"0123456789abcdef"[c / 16], 1);
	write (1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
			printable(*str++);
		else
			nonprintable(*str++);
	}
}

/* int main(void)
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	str = "Coucou\ttu vas bien ?";
	printable('\n');
	ft_putstr_non_printable(str);
	return 0;
}
 */
