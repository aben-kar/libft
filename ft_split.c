#include "libft.h"

static int count_word(char  const *s1, char sp)
{
    int i = 0;
    int count = 0;
    int check = 1;
    while (s1[i])
    {
        if (s1[i] != sp && check == 1)
        {
            count += 1;
            check = 0;
        }
        else if(s1[i] == sp)
            check = 1;
        i++;
    }
    return count;
}

static char *ft_strsdup(char const *s, size_t *j, char sp)
{
    char *result;
    size_t i;
    size_t k;

    i = *j;
    while (s[*j] != sp && s[*j])
        (*j)++;
    result = (char *)malloc((*j - i + 1) * sizeof(char));
    if (!result)
        return (NULL);
        k = 0;
    while ( k < *j - i)
    {
        result[k] = s[i + k];
        k++;
    }
    result[k] = '\0';
    return (result);
}

static void ft_free(int i, char **prr)
{
    while (i >= 0)
    {
        free(prr[i]);
        i--;
    }
    free(prr);
}

char **ft_split(char const *s, char c)
{
    size_t j;
    size_t i;

    i = 0;
    j = 0;
    if (!s)
        return NULL;
    char **prr;
    size_t len_word;
    len_word = count_word(s, c);
    prr = (char **) malloc((len_word + 1) * sizeof(char *));
    if (prr == NULL) return NULL;
    while (j < len_word)
    {
        while (s[i] == c && s[i])
            i++;
        prr[j] = ft_strsdup(s, &i, c);
        if (!prr[j])
        {
            ft_free(j - 1, prr);
            return (NULL);
        }
        j++;
    }
    return prr;
}

int main()
{
    char **arr;
    
    arr = ft_split(" av ab an ", ' ');
    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i]);
    }
    free(arr);
}