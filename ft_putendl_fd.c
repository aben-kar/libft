#include "libft.h"
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return ;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}
int main()
{
    int fd = open("test", O_CREAT| O_RDWR);
    ft_putendl_fd("pixou", fd);
    return 0;
}