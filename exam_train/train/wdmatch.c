#include <unistd.h>
void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_wdmatch(char *str1, char *str2, char *comp)
{
	int i = 0; 
	int j = 0;
	int k = 0;
	
	while (str1[i])
	{
		while (str1[i] != str2[j] && str2[j] != '\0')
			j++;
		if (str1[i] == str2[j] && str2[j] != '\0')
		{
			comp[k] = str1[i];
			j++;
			k++;
		}
		i++;
	}
	comp[k] = '\0';
	if (ft_strcmp(str1, comp) == 0)
		ft_putstr(comp);
	
}

int main(int ac, char **av)
{
	char str[1000];

	if (ac == 3)
	{
		ft_wdmatch(av[1], av[2],str);
	}
	write (1, "\n", 1);
	return (0);
}
