#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src); //ex00
char    *ft_strncpy(char *dest, char *src, unsigned int n); //ex01
int    ft_str_is_alpha(char *str); //ex02
int	ft_str_is_numeric(char *str); //ex03
int	ft_str_is_lowercase(char *str); //ex04
int	ft_str_is_uppercase(char *str); //ex05
int	ft_str_is_printable(char *str); //ex06
char	*ft_strupcase(char *str); //ex07
char	*ft_strlowcase(char *str); //ex08
char *ft_strcapitalize(char *str); //ex09
unsigned int   ft_strlcpy(char *dest, char *src, unsigned int size); //ex10

int main(void)
{
    //test ex00 char *ft_strcpy(char *dest, char *src)
    printf("Test ex00\n");
    char src00[] = "the source";
    char dest00[] = "dest should be longer";
    printf("%s\n", strcpy(dest00, src00));
    printf("%s\n", ft_strcpy(dest00, src00));

    //test ex01 char    *ft_strncpy(char *dest, char *src, unsigned int n);
    printf("Test ex01\n");
    char dest01[] = "destination should be longer";
    char src01[] = "the source";

    printf("Test 1 Expected output:\n");
    printf("%s\n", strncpy(dest01, src01, 7));
    printf("Test 1 Output:\n");
    printf("%s\n", ft_strncpy(dest01, src01, 7));

    printf("Test 2 Expected output:\n");
    printf("%s\n", strncpy(dest01, src01, 20));
    printf("Test 2 Output:\n");
    printf("%s\n", ft_strncpy(dest01, src01, 20));

    //test ex02 int    ft_str_is_alpha(char *str)
    printf("Test ex02\n");
    char str1[] = "ThisWouldReturnOne";
    char str2[] = "";
    char str3[] = "This would return 0";

    printf("%i\n", ft_str_is_alpha(str1));  //1
    printf("%i\n", ft_str_is_alpha(str2));  //1
    printf("%i\n", ft_str_is_alpha(str3));  //0

    //test ex03 int	ft_str_is_numeric(char *str)
    printf("Test ex03\n");
    printf("%i\n", ft_str_is_numeric(""));  //1
    printf("%i\n", ft_str_is_numeric("1234567890987654321"));  //1
    printf("%i\n", ft_str_is_numeric("Hello"));  //0
    printf("%i\n", ft_str_is_numeric("!@#"));  //0

    //test ex04 int	ft_str_is_lowercase(char *str)
    printf("Test ex04\n");
    printf("%i\n", ft_str_is_lowercase(""));  //1
    printf("%i\n", ft_str_is_lowercase("strislowercase"));  //1
    printf("%i\n", ft_str_is_lowercase("Hello"));  //0
    printf("%i\n", ft_str_is_lowercase("!@#"));  //0

    //test ex05 int	ft_str_is_uppercase(char *str)
    printf("Test ex05\n");
    printf("%i\n", ft_str_is_uppercase(""));  //1
    printf("%i\n", ft_str_is_uppercase("UPPERCASE"));  //1
    printf("%i\n", ft_str_is_uppercase("Hello"));  //0
    printf("%i\n", ft_str_is_uppercase("!@#"));  //0

    //test ex06 int	ft_str_is_printable(char *str)
    printf("Test ex06\n");
    printf("%i\n", ft_str_is_printable(""));  //1
    printf("%i\n", ft_str_is_printable("Printable !@#"));  //1
    printf("%i\n", ft_str_is_printable("This is \t unprintable"));  //0
    printf("%i\n", ft_str_is_printable("Another \n unprintable"));  //0

    // test ex07 char	*ft_strupcase(char *str)
    printf("Test ex07\n");
    char str07[] = "lOwerCase 123 !@#";
	printf("%s", ft_strupcase(str07)); //LOWERCASE 123 !@#%

    //test ex08 int	*ft_strlowcase(char *str)
    printf("Test ex08\n");
    char str08[] = "lOwerCaSe 123 !@#";
	printf("%s", ft_strlowcase(str08)); //lowercase 123 !@#%

    // test ex09 char *ft_strcapitalize(char *str)
    printf("Test ex09\n");
    char str09[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str09));
    
    // test ex10 unsigned int   ft_strlcpy(char *dest, char *src, unsigned int size)
    printf("Test ex10\n");
    char src10[] = "source1";
	char dest10[] = "destination";
    // printf("%s | %d\n", dest, strlcpy(dest, src, (unsigned long) 7)); 
    printf("%s | %d\n", dest10, ft_strlcpy(dest10, src10, 7)); //source | 7
    printf("%s | %d\n", dest10, ft_strlcpy(dest10, src10, 3)); //so | 7
    return 0;
}
