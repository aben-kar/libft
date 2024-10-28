#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if ((char)c == *str)
            return (char *)str;
        str++;
    }
    if ((char)c == '\0')
        return (char *)str;
    return NULL;
}
// int main ()
// {
//     printf ("%s", ft_strchr("achraf", a));
// }