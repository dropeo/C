#include <unistd.h>

int g_lenght;
char g_array[10];

void	rec(int prev, int n)
{
	int i;

	if (n == g_lenght)
	{
		write(1, g_array, g_lenght);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (i <= 10 - g_lenght + n - 1)
	{
		g_array[n] = '0' + i;
		rec(i, n + 1);
		i++;
	}
}

void	print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i;
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_lenght = n;
	while (i < 10 - n)
	{
		g_array[0] = '0' + i;
		rec(i, 1);
		i++;
	}
	print_last(i);
}

int	main(void)
{
	ft_print_combn(2); // Teste com 2 para combinações de 2 dígitos
	write(1, "\n", 1);
	return (0);
}

