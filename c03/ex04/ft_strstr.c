#include <stdbool.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;
	bool found;

	i = 0;
	found = false;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] )
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;


	}
}
