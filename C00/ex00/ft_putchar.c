#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
//main comentetada.

/*int main()
{
	ft_putchar('c');
	ft_putchar('\n');
}*/
