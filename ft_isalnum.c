#include "libft.h"

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
// int main()
// {
// 	printf ("%d", ft_isalnum(94));
// }
