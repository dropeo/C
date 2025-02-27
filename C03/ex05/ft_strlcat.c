#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a])
		a++;
	while (src[res])
		res++;
	if (size <= a)
		res += size;
	else
		res += a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}

int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	unsigned int result;

	result = ft_strlcat(dest, src, 15);  // concatena src em dest com limite de size
	write(1, dest, 13);  // imprime a string resultante
	return (0);
}
