#include <stdio.h>
#include "ft.h"

//just check if it works
int	main(void)
{

	ft_putchar('T');
	ft_putstr("Hello putstr");
	ft_strcmp("abcd", "123");
	ft_strlen("some string");
	int a = 42;
	int b = 0;
	ft_swap(&a, &b);

	return 0;
}
