#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    size_t i = 0;

    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

int main()
{
    char sttr[10] = "1234567";
    char ssttr[10] = "12345678";
    ft_bzero(sttr + 4, 1);
    bzero(ssttr + 4, 3);
    printf ("%s\n", sttr);
    printf ("%s", ssttr);
}