#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2); //ex00
int	ft_strncmp(char *s1, char *s2, unsigned int n); //ex01
char	*ft_strcat(char *dest, char *src); //ex02
char	*ft_strncat(char *dest, char *src, unsigned int nb); //ex03
char	*ft_strstr(char *str, char *to_find); //ex04
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); //ex05

int	main(void)
{
	//test ex00
	printf("Testing ex00:\n");
	printf("Expected:\n");
	printf("%i\n", strcmp("equal", "equal"));
	printf("%i\n", strcmp("str1", "str0"));
	printf("%i\n", strcmp("str1", "str2"));
	printf("Output:\n");
	printf("%i\n", ft_strcmp("equal", "equal"));
	printf("%i\n", ft_strcmp("str1", "str0"));
	printf("%i\n", ft_strcmp("str1", "str2"));

//test ex01
	printf("Testing ex01:\n");
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

//test ex02
	printf("Testing ex02:\n");
	char dest1_02[42] = "Hello 1+";
	char src1_02[] = "World 2";
	char dest2_02[42] = "Hello 1+";
	char src2_02[] = "World 2";
	printf("Expected:\n");
	printf("%s\n", strcat(dest1_02, src1_02));
	printf("Output:\n");
	printf("%s\n", ft_strcat(dest2_02, src2_02));

//test ex03
	printf("Testing ex03:\n");
	char dest1_03[42] = "Hello 1+";
	char src1_03[] = "World 2";
	char dest2_03[42] = "Hello 1+";
	char src2_03[] = "World 2";
	printf("Expected:\n");
	printf("%s\n", strncat(dest1_03, src1_03, 5));
	printf("Output:\n");
	printf("%s\n", ft_strncat(dest2_03, src2_03, 5));

	//test ex04
	printf("Testing ex04:\n");
	char str[] = "42 Adelaide week 2 piscine";
	char find[] = "lai";
	printf(":%s:\n", strstr(str, find));
	printf(":%s:\n", ft_strstr(str, find));

//test ex05
	printf("Testing ex05:\n");
	char src[] = "a test!"; //7
    char dest[] = "This is                          "; //33
	int output = ft_strlcat(dest, src, 20);
	int expected = strlcat(dest, src, 20);
	printf("Expected:\n%i\n", expected);
	printf("Output:\n%i\n", output);

	return (0);
}

