#include <unistd.h>
int main(int ac, char **av) 	
{
	 int index;
	 index = 0;
	 if (ac == 2)
	 {
	 	while (av[1][index])
	 	{
	  		if (av[1][index] >= 'a' && av[1][index] <= 'z')
	     		av[1][index] = ('m' - (av[1][index] - 'n'));
			else if (av[1][index] >= 'A' && av[1][index] <= 'Z')
				av[1][index] = ('M' - (av[1][index] - 'n'));
			write (1, &av[1][index], 1);
			index++;
	 	}
	}
	write (1, "\n", 1);
	 return 0;
}
