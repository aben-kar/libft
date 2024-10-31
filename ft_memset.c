#include "libft.h"

void *ft_memset(void *ptr, int vl, size_t n)
{
    unsigned char *p = (unsigned char *)ptr;  // Cast pour travailler byte par byte
    size_t i = 0;

    while (i < n )  // Itérer sur n bytes
    {
        p[i] = (unsigned char)vl;  // Assigner la valeur byte par byte
        i++;
    }
    return ptr;  // Retourner le pointeur original
}
int main() {
    char str[11] = "123456789";  // Add null-terminator
    char str2[11] = "123456789";  // Add null-terminator
    ft_memset(str + 3, 'b', 4);
    memset(str2 + 3, 'b', 4);
    printf("%s\n", str);
    printf ("%s", str2);
    return 0;
}