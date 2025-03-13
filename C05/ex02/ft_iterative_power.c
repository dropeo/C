#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	buffer;

	buffer = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * buffer;
		power--;
	}
	return (nb);
}

int	main(void)
{
	int	result;
	char str[50];

	result = ft_iterative_power(2, 3);
	snprintf(str, sizeof(str), "%d\n", result);
	write(1, str, sizeof(str));
	return (0);
}
