int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (nb == 0 && power == 0)
		pow = 1;
	else if (power < 0)
		pow = 0;
	else if (power == 0)
		pow = 1;
	else
	{
		pow = nb * ft_recursive_power(nb, power - 1);
	}
	return (pow);
}

//test ex03
#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex03------------\n");
	printf("Expected:\n1|0|1|0|32|-128\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i\n", ft_recursive_power(0 , 0), ft_recursive_power(0 , 10), ft_recursive_power(10 , 0), ft_recursive_power(42 , -42), ft_recursive_power(2 , 5), ft_recursive_power(-2 , 7));
}
