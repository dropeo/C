#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    char str[] = "Hello, World!";
    int len;

    len = ft_strlen(str);
    if (len == 13)
        write(1, "13\n", 3);
    return 0;
}
