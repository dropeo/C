#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hellp";
	unsigned int n = 5;
	int result;

	result = ft_strncmp(s1, s2, n);  // compara as duas strings até o n-ésimo caractere
	if (result == 0)
		write(1, "0", 1);  // strings são iguais até o n-ésimo caractere
	else
		write(1, "1", 1);  // strings são diferentes
	return (0);
}
