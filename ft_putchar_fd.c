#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

int main()
{
    int gd = 1;
    ft_putchar_fd('c', gd);
    return 0;
}