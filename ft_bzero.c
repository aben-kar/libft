#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int main()
// {
//     char s[20] = "hello world";
//     ft_bzero(s + 3, 3);
//     printf ("%s", s);
// }