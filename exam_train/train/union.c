#include <unistd.h>
int has_char(char *str, char c)
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

void	ft_union(char *str, char *uni, int *pos)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (has_char(uni, str[i]) == 0)
		{
			write (1, &str[i], 1);
			uni[*pos] = str[i];
			(*pos)++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int pos;
	char str[1024];

	if (ac == 3)
	{
		pos = 0;
		ft_union(av[1], str, &pos);
		ft_union(av[2], str, &pos);
	}
	write (1, "\n" , 1);
	return (0);
}
