#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int swp;
    swp = *a;
    *a = *b;
    *b = swp;
}

int main(void)
{
    int a = 21;
    int b = 42;

    ft_swap(&a, &b);

    if (a == 42 && b == 21)
        write(1, "42\n21\n", 6);
    return 0;
}
