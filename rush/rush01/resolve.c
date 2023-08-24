int	resolve(int **tab, int	*cases, int position) //tab[4][4], cases pour le nombres de cases dans le tableau soit 16, position pour la position de la case//
{
	int	size; //taille de la caisse, batiment, skyscraper bref tu bail dans le tableau//

	if (pos == 16)
		return (1);
	size = 0;
	while(++size <= 4)
	{
		if (check1(tab, position, nb) == 0)
		{
				tab[pos / 4][pos % 4]
		}
	}
}

void	affiche_soluce(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(" ");
		}
		ft_putchar("\n");
	}
}



