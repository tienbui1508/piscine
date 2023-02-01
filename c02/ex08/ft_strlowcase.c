char	*ft_strlowcase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i]) >= 'A' && str[i] <= 'Z')
           str[i] += 32;
        i++;
    }
    return (str);
}

//test ex08 int	*ft_strlowcase(char *str)
#include <stdio.h>
int main(void)
{
    char str[] = "lOwerCaSe 123 !@#";
	printf("%s", ft_strlowcase(str)); //lowercase 123 !@#%

	return (0);
}

