#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}

int	main(void)
{
	ft_putnbr(42);            // Exemplo de número positivo
	write(1, "\n", 1);
	ft_putnbr(-42);           // Exemplo de número negativo
	write(1, "\n", 1);
	ft_putnbr(-2147483648);   // Exemplo de valor mínimo
	write(1, "\n", 1);
	ft_putnbr(2147483647);    // Exemplo de valor máximo
	write(1, "\n", 1);
	return (0);
}
