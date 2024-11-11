#include "libft.h"


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *st1 = (unsigned char *)s1;
    unsigned char *st2 = (unsigned char *)s2;

    size_t i = 0;
    while (i < n && st1[i] == st2[i] && (st1[i] || st2[i])) 
        i++;
    if (i == n)
        return 0;
    return (st1[i] - st2[i]);
}

int main()
{
    printf ("%d\n", ft_memcmp(NULL, "healo", 0));
    printf ("%d", memcmp(NULL, NULL, 0));
}