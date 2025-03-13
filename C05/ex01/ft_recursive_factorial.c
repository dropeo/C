#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	result;
	char str[50];

	result = ft_recursive_factorial(5);
	snprintf(str, sizeof(str), "%d\n", result);
	write(1, str, sizeof(str));
	return (0);
}
