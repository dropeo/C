#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void dec_to_base(int nbr, char *base, int n)
{
    if (nbr > n - 1)
        dec_to_base(nbr / n, base, n);
    ft_putchar(base[nbr % n]);
}

void ft_putnbr_base(int nbr, char *base)
{
    char *buffer;
    int n;

    n = 0;
    while (*base != '\0' && *base != '+' && *base != '-')
    {
        buffer = base;
        while (*buffer++)
        {
            if (*buffer == *base)
                return;
        }
        n++;
        base++;
    }
    if (n > 1 && *base != '+' && *base != '-')
    {
        if (nbr < 0)
        {
            nbr = -nbr;
            ft_putchar('-');
        }
        dec_to_base(nbr, base - n, n);
    }
}

int main()
{
    char base[] = "0123456789ABCDEF";
    int num = -255;
    ft_putnbr_base(num, base);
    ft_putchar('\n');
    return 0;
}
