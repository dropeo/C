#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hello";
	int result;

	result = ft_strcmp(s1, s2);  // compara as duas strings
	if (result == 0)
		write(1, "0", 1);  // strings são iguais
	else
		write(1, "1", 1);  // strings são diferentes
	return (0);
}
