#include "libft.h"

void my_upper(unsigned int i, char *str)
{
    if(*str >= 'a' && *str <= 'z')
        *str -= 32;
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i = 0;

    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
int main()
{
    char s[] = "hello world";
    ft_striteri(s, my_upper);
    printf("%s", s);
    return 0;
}