#include <unistd.h>
int	has_char(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void ft_inter(char *st1, char *st2, char *comp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (st1[i])
	{
		if (has_char(st2, st1[i]) == 1)
		{
			if (has_char(comp, st1[i]) == 0)
			{
				write (1, &st1[i], 1);
				comp[j] = st1[i];
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	char str[2000];

	if (ac == 3)
	{
		ft_inter(av[1], av[2], str);
	}
	write (1, "\n", 1);
	return (0);
}
