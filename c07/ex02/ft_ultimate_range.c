#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (min >= max)
		return (0);
	range = (int *)(malloc(len * sizeof(int)));
	if (!range)
		return (0);
	i = 0;
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (len);
}

//test ex01
#include <stdio.h>
int main(void)
{
	int min = -4;
	int max = 2;
	int *output;
	int size;
	int i = 0;
	size = ft_ultimate_range(&output, min, max);
	printf("--------------Testing ex02--------------\n");
	printf("Expected:\n-4 -3 -2 -1 0 1\n");
	printf("Output:\n%i", size);
	while (i < 6)
	{
		printf("%i ", output[i]);
		i++;
	}
	return 0;
}
