#include <stdio.h>
int 	main(int ac, char **av)
{
	int i;
	int change;
	int count;

	i = 0; 
	change = 0; 
	count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (change == 1 && av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				change = 0;
				count++;
			}
			if (change == 0 && !(av[1][i] >= 'a' && av[1][i] <= 'z'))
				change = 1;
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
