int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}

//test ex01
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1_01[] = "String 7";
	char str2_01[] = "String a";
	printf("Expected:\n");
	printf("%i\n", strncmp(str1_01, str2_01, 8));
	printf("%i\n", strncmp(str1_01, str2_01, 6));
	printf("%i\n", strncmp(str2_01, str1_01, 8));
	printf("Output:\n");
	printf("%i\n", ft_strncmp(str1_01, str2_01, 8));
	printf("%i\n", ft_strncmp(str1_01, str2_01, 6));
	printf("%i\n", ft_strncmp(str2_01, str1_01, 8));

	return 0;
}
