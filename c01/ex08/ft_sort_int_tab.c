
void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}	

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (tab[i] > tab[j])
				swap(tab[i], tab[j]);
		}
	}
}
