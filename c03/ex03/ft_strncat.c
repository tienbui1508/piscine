int	len_strncat(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = (unsigned int) len_strncat(dest);
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

//test ex03
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest1_03[42] = "Hello 1+";
	char src1_03[] = "World 2";
	char dest2_03[42] = "Hello 1+";
	char src2_03[] = "World 2";
	printf("Expected:\n");
	printf("%s\n", strncat(dest1_03, src1_03, 5));
	printf("Output:\n");
	printf("%s\n", ft_strncat(dest2_03, src2_03, 5));

	return 0;
}
