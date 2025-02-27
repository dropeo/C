#include <unistd.h>

void	ft_print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		write (1, "\n", 1);
		n++;
	}
}
// main comentada
/*int	main()
{
	ft_print_numbers();
}*/