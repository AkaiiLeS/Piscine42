int check_for_doubles(int **tab, int position, int nb) //nb pour la size de la caisse//
{
	int	i;

	i = -1;
	while (++i < position / 4)
		if (tab[i][pos % 4] == nb)
			return (1);
	i = -1;
	while (++i < position % 4)
		if (tab[i][pos / 4] == nb)
			return (1);
	return (0);
}


