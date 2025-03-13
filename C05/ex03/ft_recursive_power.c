#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	result;
	char str[50];

	result = ft_recursive_power(2, 3);
	snprintf(str, sizeof(str), "%d\n", result);
	write(1, str, sizeof(str));
	return (0);
}
