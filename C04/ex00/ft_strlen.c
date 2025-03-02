#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
    char *str = "teste";
    int len;

    len = ft_strlen(str);
    write(1, &len, sizeof(len));
    return (0);
}
