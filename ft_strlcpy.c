#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t len = ft_strlen(src);
    size_t i = 0;

    if (size > 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
    }
    dest[i] = '\0';
    return len;
}

int main()
{
    char src[] = "pooooool";
    char destt[10];
    printf ("%zu\n", ft_strlcpy(destt, src, 3));
    printf ("%s", destt);
}