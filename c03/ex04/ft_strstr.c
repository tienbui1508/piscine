#include <stdbool.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;
	bool	found;

	i = 0;
	found = false;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

//test ex04
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "42 Adelaide week 2 piscine";
	char find[] = "week";
	printf("%s\n", strstr(str, find));
	printf("%s\n", ft_strstr(str, find));
}
