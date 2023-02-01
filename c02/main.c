#include <stdio.h>
#include <string.h>
// char *ft_strcpy(char *dest, char *src); //ex00
// char    *ft_strncpy(char *dest, char *src, unsigned int n); //ex01
// int    ft_str_is_alpha(char *str); //ex02
// int	ft_str_is_numeric(char *str); //ex03
// int	ft_str_is_lowercase(char *str); //ex04
// int	ft_str_is_uppercase(char *str); //ex05
// int	ft_str_is_printable(char *str); //ex06
// char	*ft_strupcase(char *str); //ex07
// char	*ft_strlowcase(char *str); //ex08
char *ft_strcapitalize(char *str); //ex09

int main(void)
{
    // //test ex00 char *ft_strcpy(char *dest, char *src)
    // char src[] = "the source";
    // char dest[] = "dest should be longer";
    // printf("%s\n", strcpy(dest, src));
    // printf("%s\n", ft_strcpy(dest, src));

    // //test ex01 char    *ft_strncpy(char *dest, char *src, unsigned int n);
    // char dest[] = "destination should be longer";
    // char src[] = "the source";

    // printf("Test 1 Expected output:\n");
    // printf("%s\n", strncpy(dest, src, 7));
    // printf("Test 1 Output:\n");
    // printf("%s\n", ft_strncpy(dest, src, 7));

    // printf("Test 2 Expected output:\n");
    // printf("%s\n", strncpy(dest, src, 20));
    // printf("Test 2 Output:\n");
    // printf("%s\n", ft_strncpy(dest, src, 20));

    // //test ex02 int    ft_str_is_alpha(char *str)
    // char str1[] = "ThisWouldReturnOne";
    // char str2[] = "";
    // char str3[] = "This would return 0";

    // printf("%i\n", ft_str_is_alpha(str1));  //1
    // printf("%i\n", ft_str_is_alpha(str2));  //1
    // printf("%i\n", ft_str_is_alpha(str3));  //0

    // //test ex03 int	ft_str_is_numeric(char *str)
    // printf("%i\n", ft_str_is_numeric(""));  //1
    // printf("%i\n", ft_str_is_numeric("1234567890987654321"));  //1
    // printf("%i\n", ft_str_is_numeric("Hello"));  //0
    // printf("%i\n", ft_str_is_numeric("!@#"));  //0

    // //test ex04 int	ft_str_is_lowercase(char *str)
    // printf("%i\n", ft_str_is_lowercase(""));  //1
    // printf("%i\n", ft_str_is_lowercase("strislowercase"));  //1
    // printf("%i\n", ft_str_is_lowercase("Hello"));  //0
    // printf("%i\n", ft_str_is_lowercase("!@#"));  //0

    // //test ex05 int	ft_str_is_uppercase(char *str)
    // printf("%i\n", ft_str_is_uppercase(""));  //1
    // printf("%i\n", ft_str_is_uppercase("UPPERCASE"));  //1
    // printf("%i\n", ft_str_is_uppercase("Hello"));  //0
    // printf("%i\n", ft_str_is_uppercase("!@#"));  //0

    // //test ex06 int	ft_str_is_printable(char *str)
    // printf("%i\n", ft_str_is_printable(""));  //1
    // printf("%i\n", ft_str_is_printable("Printable !@#"));  //1
    // printf("%i\n", ft_str_is_printable("This is \t unprintable"));  //0
    // printf("%i\n", ft_str_is_printable("Another \n unprintable"));  //0

    // // test ex07 char	*ft_strupcase(char *str)
    // char str[] = "lOwerCase 123 !@#";
	// printf("%s", ft_strupcase(str)); //LOWERCASE 123 !@#%

    // //test ex08 int	*ft_strlowcase(char *str)
    // char str[] = "lOwerCaSe 123 !@#";
	// printf("%s", ft_strlowcase(str)); //lowercase 123 !@#%

    return 0;
}
