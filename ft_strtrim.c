#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;
	size_t	k;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = len_s1 - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	len = j - i + 1;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	k = 0;
	while (k < len && s1[i + k])
	{
		dest[k] = s1[i + k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char s1[100] = "!hello, worldccccccccccch!eh";
// 	char set[100] = "!eh";
// 	char *str = ft_strtrim(s1, set);
// 	printf("%s", str);
// }