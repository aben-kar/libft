#include "libft.h"

static void	my_upper(unsigned int i, char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= i;
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int	main(void)
// {
// 	void	(*f)(unsigned int, char *);
// 	char	s[] = "hello world";

// 	f = my_upper;
// 	ft_striteri(s, f);
// 	printf("%s", s);
// 	return (0);
// }
