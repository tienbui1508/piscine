void	ft_putchar(char c);

void	print_line(char first_char, char mid_char, char last_char, int len)
{
	int	i;

	i = 1;
	if (len == 1)
		ft_putchar(first_char);
	else if (len == 2)
	{
		ft_putchar(first_char);
		ft_putchar(last_char);
	}
	else if (len > 3)
	{
		ft_putchar(first_char);
		while (i++ < len -1)
			ft_putchar(mid_char);
		ft_putchar(last_char);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x >= 1 && y >= 1)
	{
		while (row <= y)
		{
			if (row == 1)
				print_line('A', 'B', 'C', x);
			else if (row == y)
				print_line('C', 'B', 'A', x);
			else
				print_line('B', ' ', 'B', x);
			row++;
		}
	}
}
