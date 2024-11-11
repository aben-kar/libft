#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t len_s;
    char    *dest;

    if (!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        return (NULL);
    if (start + len > len_s)
        len = len_s - start;
    dest = (char *) malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return (NULL);
    size_t i = 0;
    while (s[start + i] && i < len)
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// int main()
// {
//     char s1[] = "hello, world!";

//     char *dest = ft_substr(NULL, 7, 5);
//     printf ("%s", dest);
// }