int	ft_str_is_lowercase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}

/* //test ex04 int	ft_str_is_lowercase(char *str)
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%i\n", ft_str_is_lowercase(""));  //1
    printf("%i\n", ft_str_is_lowercase("strislowercase"));  //1
    printf("%i\n", ft_str_is_lowercase("Hello"));  //0
    printf("%i\n", ft_str_is_lowercase("!@#"));  //0

	return (0);
}
 */
