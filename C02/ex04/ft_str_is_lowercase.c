#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str[] = "abcde";
	char result;

	result = ft_str_is_lowercase(str) + '0';  // converte 0 ou 1 para char
	write(1, &result, 1);
	return (0);
}
