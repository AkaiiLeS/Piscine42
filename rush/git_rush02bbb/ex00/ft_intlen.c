#include "ft_function.h"

int ft_intlen(int nb)
{
    int i;

    i = 0;
    if (nb == 0)
        return (1);
    else
    {
        while (nb > 0)
        {
            nb = nb / 10;
            i++;
        }
        return (i);
    }
}
