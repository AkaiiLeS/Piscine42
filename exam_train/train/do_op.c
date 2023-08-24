#include <stdio.h>
#include <stdlib.h>
int ft_do_op(char av, int n1, int n2)
{
	int result;

	result = 0;
	if (av == '%')
		result = (n1 % n2);
	else if (av == '/')
		result = (n1 / n2);
	else if (av == '+')
		result = (n1 + n2);
	else if (av == '-')
		result = (n1 - n2);
	return (result);
}

int main (int ac, char **av)
{
	int n1;
	int n2;
	char result;

	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		result = ft_do_op(av[2][0], n1, n2);
		printf("%i", result);
	}
	printf("\n");
	return (0);
}
