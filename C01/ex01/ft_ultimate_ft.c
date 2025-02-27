#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nbr = 0;
    int *p1 = &nbr;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;

    ft_ultimate_ft(&p8);
    
    if (nbr == 42)
        write(1, "42\n", 3);
    return 0;
}
