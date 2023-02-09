int	ft_iterative_factorial(int nb); //ex00
int	ft_recursive_factorial(int nb); //ex01
int	ft_iterative_power(int nb, int power); //ex02
int	ft_recursive_power(int nb, int power); //ex03
int	ft_fibonacci(int index); //ex04
int	ft_sqrt(int nb); //ex05
int	ft_is_prime(int nb); //ex06
int	ft07_is_prime(int nb); //ex07

#include <stdio.h>
int	main(void)
{
	printf("------------Testing ex00------------\n");
	printf("Expected:\n1|0|1|24|3628800\n");
	printf("Output:\n%i|%i|%i|%i|%i\n",
	ft_iterative_factorial(0),
	ft_iterative_factorial(-42),
	ft_iterative_factorial(1),
	ft_iterative_factorial(4),
	ft_iterative_factorial(10));

	printf("------------Testing ex01------------\n");
	printf("Expected:\n1|0|1|24|3628800\n");
	printf("Output:\n%i|%i|%i|%i|%i\n",
	ft_recursive_factorial(0),
	ft_recursive_factorial(-42),
	ft_recursive_factorial(1),
	ft_recursive_factorial(4),
	ft_recursive_factorial(10));

	printf("------------Testing ex02------------\n");
	printf("Expected:\n1|0|1|0|32|-128\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i\n",
	ft_iterative_power(0 , 0),
	ft_iterative_power(0 , 10),
	ft_iterative_power(10 , 0),
	ft_iterative_power(42 , -42),
	ft_iterative_power(2 , 5),
	ft_iterative_power(-2 , 7));

	printf("------------Testing ex03------------\n");
	printf("Expected:\n1|0|1|0|32|-128\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i\n",
	ft_recursive_power(0 , 0),
	ft_recursive_power(0 , 10),
	ft_recursive_power(10 , 0),
	ft_recursive_power(42 , -42),
	ft_recursive_power(2 , 5),
	ft_recursive_power(-2 , 7));

	printf("------------Testing ex04------------\n");
	printf("Expected:\n-1|0|1|1|2|3|5|8|13|55\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i|%i|%i|%i\n",
	ft_fibonacci(-42),
	ft_fibonacci(0),
	ft_fibonacci(1),
	ft_fibonacci(2),
	ft_fibonacci(3),
	ft_fibonacci(4),
	ft_fibonacci(5),
	ft_fibonacci(6),
	ft_fibonacci(7),
	ft_fibonacci(10));

	printf("------------Testing ex05------------\n");
	printf("Expected:\n0|1|3|10|42|0|0\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n",
	ft_sqrt(0),
	ft_sqrt(1),
	ft_sqrt(9),
	ft_sqrt(100),
	ft_sqrt(1764),
	ft_sqrt(24),
	ft_sqrt(42));

	printf("------------Testing ex06------------\n");
	printf("Expected:\n0|0|0|0|1|1|1\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n",
	ft_is_prime(-42),
	ft_is_prime(0),
	ft_is_prime(1),
	ft_is_prime(42),
	ft_is_prime(2),
	ft_is_prime(89),
	ft_is_prime(4219));

	printf("------------Testing ex07------------\n");
	printf("Expected:\n2|2|5|13|43|89|149\n");
	printf("Output:\n%i|%i|%i|%i|%i|%i|%i\n",
	ft_find_next_prime(-42),
	ft_find_next_prime(0),
	ft_find_next_prime(5),
	ft_find_next_prime(13),
	ft_find_next_prime(42),
	ft_find_next_prime(89),
	ft_find_next_prime(142));

	return 0;
}
