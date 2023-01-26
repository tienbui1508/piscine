#include <unistd.h>

void ft_print_char(char c)
{
	write(1, &c, 1);
}

void ft_print_num(int array[], int n)
{
	int	i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = array[i] + '0';
		ft_print_char(c);
		i++;
	}
	if (array[0] != 10 - n)
		write(1, ", ", 2);
}

void ft_recursive(int array[], int n, int i)
{
	if (i == 0)
		array[0] = 0;
	else
		array[i] = array[i-1] + 1;
	while (array[i] <= 10 - n + i)
	{
		if (i == n - 1)
			ft_print_num(array, n);
		else
			ft_recursive(array, n, i + 1);
		array[i] = array[i] + 1;
	}

}
void ft_print_combn(int n)
{
	int	array[10];
	ft_recursive(array, n, 0);
}

int	main(void)
{
	ft_print_combn(3);
}
