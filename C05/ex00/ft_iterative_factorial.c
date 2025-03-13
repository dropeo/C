#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}

int	main(void)
{
	int	result;
	char str[50];

	result = ft_iterative_factorial(5);
	snprintf(str, sizeof(str), "%d\n", result);
	write(1, str, sizeof(str));
	return (0);
}
