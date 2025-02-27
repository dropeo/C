#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char str[] = "Hello123";
	char result;

	result = ft_str_is_printable(str) + '0';  // converte 0 ou 1 para char
	write(1, &result, 1);
	return (0);
}
