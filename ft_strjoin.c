#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
    int j = 0;
    while (dest[j])
        j++;
    int i = 0;
    while (src[i])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return dest;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *concate;
    if (!s1 || !s2)
        return NULL;
    
    size_t len_s1 = ft_strlen(s1);
    size_t len_s2 = ft_strlen(s2);
    
    concate = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (concate == NULL)
    {
        return NULL;
    }
    
    size_t i = 0;
    while (s1[i])
    {
        concate[i] = s1[i];
        i++;
    }
    ft_strcat(concate, (char *)s2);
    return concate;
}

int main()
{
    char *s1 = "world";

    char *dest = ft_strjoin( s1 , NULL);
    printf("%s", dest);
}