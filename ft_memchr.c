#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char *ptr = (unsigned char *)s;
    size_t i = 0;

    while (i < n)
    {
        if(ptr[i] == (unsigned char)c)
            return &ptr[i];
        i++;
    }

    return NULL;
}

int main()
{
    char *s1 = "pixhaha";

    char *result = ft_memchr(s1, 'h', 10);
    printf ("%s", result);
    return 0;

}