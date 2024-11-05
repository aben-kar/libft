#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1)
        return NULL;
    if (!set)
        return (char *)s1;
    size_t len_s1 = ft_strlen(s1);

    size_t i = 0;
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    size_t j = len_s1 - 1;
    while (j > i && ft_strchr(set, s1[j]))
        j--;
    size_t len = j - i + 1;

    char *dest;
    dest = (char *) malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return NULL;
    size_t k = 0;
    while (k < len && s1[i + k])
    {
        dest[k] = s1[i + k];
        k++;
    }
    dest[k] = '\0';
    return dest;
}

int main()
{
    char s1[100] = "!hello, worldccccccccccch!eh"; 
    char set[100] = "!eh"; 
    char *str = ft_strtrim(s1, set);
    printf ("%s", str);
}