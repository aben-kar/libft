#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    char *ptr;

    ptr = (char *)ft_calloc((len + 1) , sizeof(char));
    if (ptr == NULL) 
        return NULL;
    ft_memcpy(ptr, s1, len);
    return ptr;
}

// int main()
// {
//     char str[] = "hello00wef0.wef5";
//     char *dest = ft_strdup(str);
//     printf ("%s\n", dest);
// }