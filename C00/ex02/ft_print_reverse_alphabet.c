#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char counter = 'z';

	while(counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
	write(1, "\n", 1);
}
// main comentada
int	main()
{
	ft_print_reverse_alphabet();
}
