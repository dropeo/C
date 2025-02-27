int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
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

#include <unistd.h>

int main() {
    char str[] = "Hello";
    char c = ft_str_is_alpha(str) + '0';
    write(1, &c, 1);
}
