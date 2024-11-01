#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len_ds = ft_strlen(dest);
    size_t len_sr = ft_strlen(src);
    size_t i = 0;

    if (size < len_ds)
        return (size + len_sr);
    while (src[i] && len_ds + i < size - 1)
    {
        dest[len_ds + i] = src[i];
        i++;
    }
    printf("%zu\n", i + len_ds);
    dest[len_ds + i] = '\0';
    return len_ds + len_sr;
}
int main() {
    char dest[30] = "hello";
    char dest2[30] = "hellowo";
    char src[30] = "World!";
    char src1[30] = "World!";
    size_t size = 30;

    size_t result = ft_strlcat(dest, src, size);
    size_t result2 = strlcat(dest2, src1, size);
    printf("%s\n", dest);
    printf("%s\n", dest2);
    printf("%zu\n", result);
    printf("%zu\n", result2);
}