#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	
	ft_strcat(dest, src);  // concatena a string src à dest
	write(1, dest, 13);  // imprime a string concatenada
	return (0);
}
