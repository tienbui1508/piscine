int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb >= 0)
	{
		while (nb > 1)
		{
			fac *= nb;
			nb--;
		}
	}
	else
		fac = 0;
	return (fac);
}

//test ex00
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex00------------\n");
	printf("Expected:\n1|0|1|24|3628800\n");
	printf("Output:\n%i|%i|%i|%i|%i\n", ft_iterative_factorial(0), ft_iterative_factorial(-42), ft_iterative_factorial(1), ft_iterative_factorial(4), ft_iterative_factorial(10));
}
