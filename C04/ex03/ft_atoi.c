int ft_atoi(char *str)
{
    int sign;
    int number;

    sign = 1;
    number = 0;
    while (*str)
    {
        if (*str == '-')
            sign *= -1;
        else if (*str >= '0' && *str <= '9')
        {
            while (*str >= '0' && *str <= '9')
            {
                number = 10 * number + *str - '0';
                str++;
            }
            break;
        }
        str++;
    }
    return (sign * number);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char str[] = "   -1234abc";
    int num;
    num = ft_atoi(str);
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
