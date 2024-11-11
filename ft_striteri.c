#include "libft.h"

void my_upper(unsigned int i, char *str)
{
    if(*str >= 'a' && *str <= 'z')
        *str -= i;
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
    void (*f) (unsigned int , char *);
    f = my_upper;
    char s[] = "hello world";
    ft_striteri(s, f);
    printf("%s", s);
    return 0;
}
