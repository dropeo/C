#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char str[] = "ABCDE";
	char result;

	result = ft_str_is_uppercase(str) + '0';  // converte 0 ou 1 para char
	write(1, &result, 1);
	return (0);
}
