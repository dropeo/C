#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int x;
    int swp;
    int y;

    x = 1;
    while (x < size)
    {
        swp = tab[x];
        y = x - 1;
        while (y >= 0 && tab[y] > swp)
        {
            tab[y + 1] = tab[y];
            y = y - 1;
        }
        tab[y + 1] = swp;
        x++;
    }
}

int main(void)
{
    int tab[5] = {5, 2, 3, 1, 4};
    int i = 0;

    ft_sort_int_tab(tab, 5);

    while (i < 5)
    {
        write(1, &tab[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
