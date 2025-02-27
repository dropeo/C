#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int	main(void)
{
	char src[] = "Hello";
	char dest[6];  // tamanho suficiente para armazenar a string + o '\0'
	unsigned int result;

	result = ft_strlcpy(dest, src, 6);  // copia a string
	write(1, dest, result);  // imprime a string copiada
	return (0);
}
