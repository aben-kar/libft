#include <stdio.h>

#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}

int main()
{
	printf ("%d", ft_toupper(97));
}
