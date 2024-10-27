#include "libft.h"

int ft_atoi(const char *s)
{
    int i = 0;
    int rs = 0;
    int sign = 1;
    while (s[i] >= '\t' && s[i] <= '\r' || s[i] == ' ')
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1; 
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
    printf ("%d\n", ft_atoi("     	-2147483648"));
    printf ("%d\n", atoi("     -2147483648"));
    return 0;
} 