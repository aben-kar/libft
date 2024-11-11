#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// int main()
// {
//     int fd = open("test.txt", O_CREAT | O_RDWR, 0644);
//     ft_putchar_fd('c', fd);
//     return 0;
// }