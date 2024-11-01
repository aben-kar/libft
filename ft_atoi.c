#include "libft.h"

int ft_atoi(const char *s)
{
    int i = 0;
    int rs = 0;
    int sign = 1;
    while ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
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
        if (rs * sign > INT_MAX) {
            return INT_MAX;
        }
        if (rs * sign < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }
    return rs * sign;
}

// int main()
// {
//     printf("%d\n", ft_atoi("")); 
//     printf("%d\n", atoi(""));              // 0
//     printf("%d\n", ft_atoi("   456")); 
//     printf("%d\n", atoi("   456"));               // 456
//     printf("%d\n", ft_atoi("-789"));
//     printf("%d\n", atoi("-789"));              // -789
//     printf("%d\n", ft_atoi("123abc"));
//     printf("%d\n", atoi("123abc"));             // 123
//     printf("%d\n", ft_atoi("2147483648"));
//     printf("%d\n\n", atoi("2147483648"));        // INT_MAX (2,147,483,647)
//     printf("%d\n", ft_atoi("-2147483649"));
//     printf("%d\n", atoi("-2147483649"));      // INT_MIN (-2,147,483,648)
//     printf("%d\n", ft_atoi("+"));
//     printf("%d\n", atoi("+"));             // 0
//     printf("%d\n", ft_atoi("-"));
//     printf("%d\n", atoi("-"));             // 0
//     return 0;
// } 