#include <stdio.h>
#include <string.h>
// char    *ft_strncpy(char *dest, char *src, unsigned int n); //ex01
int    ft_str_is_alpha(char *str); //ex02

int main(void)
{
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

    //test ex02 int    ft_str_is_alpha(char *str)

    char str1[] = "ThisWouldReturnOne";
    char str2[] = "";
    char str3[] = "This would return 0";

    printf("%i\n", ft_str_is_alpha(str1));  //1
    printf("%i\n", ft_str_is_alpha(str2));  //1
    printf("%i\n", ft_str_is_alpha(str3));  //0

    //test ex

    return 0;
}