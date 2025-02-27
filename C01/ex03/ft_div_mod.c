#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int div;
    int mod;

    ft_div_mod(42, 5, &div, &mod);

    if (div == 8 && mod == 2)
        write(1, "8\n2\n", 4);
    return 0;
}
