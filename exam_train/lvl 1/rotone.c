#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			j = (av[1][i]);
			if (av[1][i] == 'z')
				write (1, "a", 1);
			else if (av[1][i] == 'Z')
				write (1, "A", 1);
			else if (av[1][i] >= 'a' &&  av[1][i] <= 'y' || av[1][i] >= 'A' && av[1][i] <= 'Y')
			{
				j += 1;
				write (1, &j, 1);
			}
			else
				write (1, &j, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
