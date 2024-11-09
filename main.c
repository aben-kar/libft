#include "libft.h"

void my_upper(unsigned int i, char *str)
{
    if (*str >= 'a' && *str <= 'z')
        *str -= 32;
    //return str;
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int main()
{
    char str[] = "hello";
    ft_striteri(str, my_upper);
    printf ("%s", str);

}