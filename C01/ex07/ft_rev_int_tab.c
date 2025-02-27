#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int a;

    i = 0;
    while (i < size)
    {
        a = tab[(size - 1)];
        tab[(size - 1)] = tab[i];
        tab[i] = a;
        size--;
        i++;
    }
}

int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int i = 0;

    ft_rev_int_tab(tab, 5);

    while (i < 5)
    {
        write(1, &tab[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
