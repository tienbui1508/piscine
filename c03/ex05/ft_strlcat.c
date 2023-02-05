<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:46 by dbui              #+#    #+#             */
/*   Updated: 2023/02/04 14:55:47 by dbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> 1b4a9ed13103e617889536b6892121fe7dfdebb6
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
<<<<<<< HEAD
	unsigned int	i;

	len_src = 0;
	len_dest = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0')
=======
	int	i;

	while (*src++)
		len_src++;
	while (*dest++)
>>>>>>> 1b4a9ed13103e617889536b6892121fe7dfdebb6
		len_dest++;
	i = 0;
	while (i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[size] = '\0';
<<<<<<< HEAD
	return (len_src + len_dest);
}

/* //test ex05
=======
	return (len_src + len_dest - 2);
}

//test ex05
>>>>>>> 1b4a9ed13103e617889536b6892121fe7dfdebb6
#include <stdio.h>
#include <string.h>
int	main(void)
{
<<<<<<< HEAD
	char src[] = "a test!"; //7
    char dest[] = "This is                          "; //34
	int output = ft_strlcat(dest, src, 34); //n = sizeof(dest)
	int expected = strlcat(dest, src, 34);
	printf("Expected return value: %i\n", expected);
	printf("Expected string: %s\n", expected);
	printf("Actual return value: %i\n", output);
	return 0;
} */
=======
	char first[] = "This is ";
    char last[] = "a potentially long string";
    int r, o;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);
	o = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

	/*  printf("Value returned: %d\n", o);
    if( o > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0); */
}
>>>>>>> 1b4a9ed13103e617889536b6892121fe7dfdebb6
