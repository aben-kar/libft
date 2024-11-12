#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concate;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	concate = (char *)ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (concate == NULL)
		return (NULL);
	ft_memcpy(concate, s1, len_s1);
	ft_memcpy(concate + len_s1, s2, len_s2);
	return (concate);
}

// int	main(void)
// {
// 	// char *s1 = "world";

// 	char *dest = ft_strjoin("work", NULL);
// 	printf("%s", dest);
// }