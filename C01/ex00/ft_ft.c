#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int nbr = 0;
    ft_ft(&nbr);
    write(1, "42\n", 3);
    return 0;
}
