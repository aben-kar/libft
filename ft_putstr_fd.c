#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    // if (!s)
    //     return ;
    while(s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "";
    ft_putstr_fd(str, 1);
}