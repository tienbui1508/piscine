int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

//test ex00
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("Expected:\n");
	printf("%i\n", strcmp("equal", "equal"));
	printf("%i\n", strcmp("str1", "str0"));
	printf("%i\n", strcmp("str1", "str2"));
	printf("Output:\n");
	printf("%i\n", ft_strcmp("equal", "equal"));
	printf("%i\n", ft_strcmp("str1", "str0"));
	printf("%i\n", ft_strcmp("str1", "str2"));
	return 0;
}
