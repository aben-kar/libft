#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if ((char)c == *str)
            return (char *)str;
        str++;
    }
    if ((char)c == '\0')
        return (char *)str;
    return NULL;
}

// int main()
// {
//     printf ("%s\n", ft_strchr("achraf", 97));
//     printf ("%s", strchr("achraf", 97));
// }