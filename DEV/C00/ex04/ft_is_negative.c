#include <unistd.h>

void ft_is_negative(int n)
{
    char i;

    if (n < 0)
    {
        i = 'N';
        write(1, &i, 1);
    }
    else
    {
        i = 'P';
        write(1, &i, 1);
    }
    write(1, "\n", 1);
}
//main comentada

/*int main()
{
    ft_is_negative(-1); // se colocar positivo retorna P se colocar negativo, retorna N
}*/