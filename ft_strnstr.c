#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (find[j] && str[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return ((char *)(&str[i]));
		i++;
	}
	return (0);
}

// int main()
// {
//     const char  *big = "achraf";
//     const char  *little = "hr";
//     size_t  len = 5;
//     char    *t;
//     //char    *t2;

//     t = ft_strnstr(big, NULL, len);
//     //t2 = strnstr(big, little, len);
//     printf("Resutl: %s\n", t);
//     //printf ("%s", t2);
//     return (0);
// }
