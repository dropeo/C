#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int sanitized_base(char *base)
{
    char *buffer;
    int n;

    n = 0;
    while (*base)
    {
        if (*base == '+' || *base == '-' || *base == ' ')
            return (0);
        buffer = base;
        while (*buffer++)
        {
            if (*buffer == *base)
                return (0);
        }
        n++;
        base++;
    }
    return (n);
}

int find_index(char c, char *str)
{
    int index;

    index = 0;
    while (*str)
    {
        if (c == *str)
            return (index);
        str++;
        index++;
    }
    return (-1);
}

int has_char(char c, char *str)
{
    while (*str)
    {
        if (c == *str)
            return (1);
        str++;
    }
    return (0);
}

int ft_atoi_base(char *str, char *base)
{
    int sign;
    int number;
    int n;

    n = sanitized_base(base);
    if (n < 2)
        return (0);
    sign = 1;
    number = 0;
    while (*str)
    {
        if (*str == '-')
            sign *= -1;
        else if (has_char(*str, base))
        {
            while (has_char(*str, base))
            {
                number = n * number + find_index(*str, base);
                str++;
            }
            break;
        }
        str++;
    }
    return (sign * number);
}

int main()
{
    char base[] = "0123456789ABCDEF";
    char str[] = "-FF";
    int num;
    num = ft_atoi_base(str, base);
    if (num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    if (num >= 10)
    {
        char buffer[12];
        int i = 0;
        while (num)
        {
            buffer[i++] = (num % 10) + '0';
            num /= 10;
        }
        while (i--)
            ft_putchar(buffer[i]);
    }
    else
        ft_putchar(num + '0');
    ft_putchar('\n');
    return 0;
}