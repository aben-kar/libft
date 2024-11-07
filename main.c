#include "libft.h"

static int count_word(char const *str, char sp)
{
    int i = 0;
    int count = 0;
    int fir_word = 1;

    while (str[i])
    {
        if (str[i] == sp && str[i])
            fir_word = 1;
        else if (str[i] != sp && fir_word == 1)
        {
            count++;
            fir_word = 0;
        }
        i++;
    }
    return count;
}
static char *cpy_word(char *s1, char w, int *j)
{
    int i;
    char *prr;
    int k;

    i = *j;
    while (s1[*j] != w && s1[*j])
        (*j)++;
    prr = (char) malloc((*j - i + 1) *sizeof(char));
    if (!prr)
        return NULL;
    k = 0;
    while (k < *j - i)
    {
        prr[k] = s1[i + k];
        k++;
    }
    prr[k] = '\0';
    return prr;
}

char **ft_split(char const *s, char c)
{
    int j;
    int i;
    int len_wo;
    char **arr;

    len_wo = count_word(s, c);
    arr = (char **) malloc((len_wo + 1) * sizeof(char *));
    if (!arr)
        return NULL;
    j = 0;
    i = 0;
    while (j < count_word)
    {
        while (s[i] == c && s[i])
            i++;
        arr[i] = cpy_word(s, c, &i);
        if (!arr[i])
        {
            ft_free(j, arr);
            return NULL;
        }
        j++;
    }
    return arr;
}