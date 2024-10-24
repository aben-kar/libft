#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strrchr(const char *str, int c)
{
    int len = ft_strlen ((char *)str);
    while (len > 0)
    {
        if (str[len - 1] == (char)c)
            return (char *)&str[len - 1];
        str--;
    }
    if ((char)c == '\0')
        return (char *)&str[len];
    return NULL;
}
int main()
{       
    printf("%s", ft_strrchr("achraf", 'a'));
    return 0;
}
