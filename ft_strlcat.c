#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len_ds;
    size_t len_sr;
    size_t i = 0;

    if (!dest || !src) // Check ila kan chi wa7ed menhom NULL
        return (0);

    len_ds = ft_strlen(dest);
    len_sr = ft_strlen(src);

    if (size <= len_ds) // Check ila size khassha <= len_ds
        return len_sr + size;

    while (src[i] != '\0' && (len_ds + i) < (size - 1))
    {
        dest[len_ds] = src[i];
        i++;
    }
    dest[len_ds] = '\0'; // N7tt null termination

    return len_ds + len_sr; // Rja3 l-length total
}

int main() {
    char *dest = "hello";
    char src[20] = "World!";
    size_t size = 3;

    size_t result = ft_strlcat(dest, src, size);
    printf("Resulting dest: %s\n", dest);
    printf("Returned length: %zu\n", result);
} 