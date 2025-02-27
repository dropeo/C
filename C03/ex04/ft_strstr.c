#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "Hello, world!";
	char to_find[] = "world";
	char *result;

	result = ft_strstr(str, to_find);  // encontra a substring
	if (result != 0)
		write(1, result, 5);  // imprime a substring encontrada
	return (0);
}
