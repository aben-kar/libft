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

int main()
{
    int arr[4] = {0, 10, 100, 1000};
    ft_memset(&arr[2], 5, 2);
    ft_memset(arr + 2, 57, 1);
    printf("%d\n", arr[2]);
}