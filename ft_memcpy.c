#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *des = (unsigned char *)dest;
    unsigned char *sr = (unsigned char *)src;
    size_t i = 0;

    while (i < n)
    {
        des[i] = sr[i];
        i++;
    }
    //des[i] = '\0';
    return dest;
}

int main()
{
    char src[10] = "hello";
    char dest[10] = "hello";
    char dest2[10] = "hello";

    ft_memcpy(dest, &src[2], 2);
    printf ("%s\n", dest);

    memcpy(dest2, &src[2], 2);
    printf("%s", dest2);

    return 0;
}