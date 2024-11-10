#include "libft.h"

void ft_putstr(char *str, int fd)
{
    int i = 0;
    while(str[i])
    {
        write (fd, &str[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "pool";
    ft_putstr(str, 1);
}