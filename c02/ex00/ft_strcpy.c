char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/* //test ex00 char *ft_strcpy(char *dest, char *src)
#include <stdio.h>
#include <string.h>
int main(void)
{
    char src[] = "the source";
    char dest[] = "dest should be longer";
    printf("%s\n", strcpy(dest, src));
    printf("%s\n", ft_strcpy(dest, src));
	return (0);
} */
