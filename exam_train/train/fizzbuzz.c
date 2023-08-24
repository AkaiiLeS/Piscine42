#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = (nb % 10 + '0');
	write (1, &nb, 1);
}

int main(void)
{
	int nbr = 1;
	while (nbr <= 100)
	{
		if(nbr % 3 == 0 && nbr % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(nbr);
		write (1, "\n", 1);
		nbr++;
	}
	write (1, "\n", 1);
}
