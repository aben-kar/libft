#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}

int main()
{
	printf ("%d", ft_toupper(97));
}