unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	int	i;

	while (*src++)
		len_src++;
	while (*dest++)
		len_dest++;
	i = 0;
	while (i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (len_src + len_dest - 2);
}

//test ex05
#include <stdio.h>
#include <string.h>
int	main(void)
{
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
