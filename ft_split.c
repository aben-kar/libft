#include "libft.h"

int count_word(const char *arr, char sp)
{
    int i = 0;
    int count = 0;
    int check = 1;

    while(arr[i])
    {
        if (arr[i] != sp && check == 1)
        {
            count += 1;
            check = 0;
        }
        else if (arr[i] == sp)
        {
            check = 1;
        }
        i++;
    }
    return count;
}

static int loop(int *i, const char *s, char c)
{
    int count = 0;
    while (s[(*i)] != c && s[(*i)])
    {
        (*i)++;
        count++;
    }
    return count;
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
    if (!s)
        return NULL;
    char **prr;
    size_t word = count_word(s, c);

    prr = (char **) malloc((word + 1) * sizeof(char *));
    if (prr == NULL)
        return NULL;
    int i = 0;
    int z = 0;
    int y = 0;
    int count = 0;
    while (i < word)
    {
        while (s[z] == c && s[z])
            z++;
        count = loop(&z, s, c);
        prr[i] = malloc(sizeof(char) * count + 1);
        if (!prr[i])
        {
            ft_free(i, prr);
            return (NULL);
        }
        while (s[y] == c && s[y])
            y++;
        ft_strlcpy(prr[i], s + y, count + 1);
        y = z;
        i++;
    }
    prr[i] = NULL;
    return (prr);
}

int main()
{
    char **arr = NULL;

    arr = ft_split("          ", ' ');
    for(int i = 0; i < 2; i++)
    {
        printf("%s\n", arr[i]);
    }
    free(arr);
}