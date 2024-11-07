#include "libft.h"

void *ft_memset(void *ptr, int vl, size_t n)
{
    unsigned char *p = (unsigned char *)ptr;

    size_t i;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)vl;
        i++;
    }
    return p;
}

// int main()
// {
//     int b;
//     ft_memset(&b, 5, 2);
//      ft_memset(&b, 57, 1);
//     // ft_memset(&str[4], '3', 1);
//     // ft_memset(&str[5], '7', 1);
//     printf ("%d\n",b); 
// }