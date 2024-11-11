#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s1 = "pixhaha";

// 	char *result = ft_memchr(NULL, 'h', 10);
// 	printf("%s", result);
// 	return (0);
// }