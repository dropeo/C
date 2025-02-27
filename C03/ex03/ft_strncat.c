#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
	
	ft_strncat(dest, src, 3);  // concatena até 3 caracteres de src à dest
	write(1, dest, 10);  // imprime a string concatenada
	return (0);
}
