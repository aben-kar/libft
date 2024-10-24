#include <stdio.h>

int ft_atoi(const char *s)
{
    size_t i = 0;
    int sign = 1;
    int rs = 0;
    while (s[i] >= 9 && s[i] <= 13 || s[i] == 32)
        i++;
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            sign *= -1; 
        }
        i++;
    }
    while (s[i] >= '0'&& s[i] <= '9')
    {
        rs = rs * 10 + (s[i] - 48);
        i++;
    }
    return rs * sign;
}

int main()
{
    printf ("%d", ft_atoi("     -12a3"));
    return 0;
} 