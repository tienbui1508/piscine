int	ft_str_is_printable(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) < 32 || str[i] > 127)
            return (0);
        i++;
    }
    return (1);
}

/* //test ex06 int	ft_str_is_printable(char *str)
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%i\n", ft_str_is_printable(""));  //1
    printf("%i\n", ft_str_is_printable("Printable !@#"));  //1
    printf("%i\n", ft_str_is_printable("This is \t unprintable"));  //0
    printf("%i\n", ft_str_is_printable("Another \n unprintable"));  //0

	return (0);
}
 */
