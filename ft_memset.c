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
//     char str[10] = "12345678";
//     ft_memset(&str[2], 'b', 2);
//     printf ("%s", str); 
// }
