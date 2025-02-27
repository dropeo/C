#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "hello";
	write(1, ft_strupcase(str), 5);  // imprime a string modificada
	return (0);
}
