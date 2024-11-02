#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i = 0; 
    size_t len = ft_strlen(s1);
    char *ptr;

    ptr = (char *) malloc((len + 1) * sizeof(char));
    if (ptr == NULL)
        return NULL;

    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    return ptr;
}

int main()
{
    char str[] = "hello";
    char *dest = ft_strdup(str);
    printf ("%s", dest);
}