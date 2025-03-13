#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int	result;
	char str[50];

	result = ft_fibonacci(5);
	snprintf(str, sizeof(str), "%d\n", result);
	write(1, str, sizeof(str));
	return (0);
}
