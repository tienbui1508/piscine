//test ex00
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "  Test ex00  ";
	char *expected;
	char *output;

	expected = strdup(str);
	output = ft_strdup(str);
	printf("--------------Testing ex00--------------");
	printf("Expected:\n|%s|\n", expected);
	printf("Output:\n|%s|\n", output);


	int min = -4;
	int max = 2;
	int *output = ft_range(min, max);
	int i = 0;
	printf("--------------Testing ex01--------------\n");
	printf("Expected:\n-4 -3 -2 -1 0 1\n");
	printf("Output:\n");
	while (i < max - min)
	{
		printf("%i ", output[i]);
		i++;
	}


	return 0;
}
