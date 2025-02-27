char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    ft_strcpy(dest, src);
    write(1, dest, 5);
}
