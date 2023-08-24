int ft_max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;
	i = 0;
	max = 0;
	if ( len > 0)
		max = tab[i];
	while ( i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max)
}
