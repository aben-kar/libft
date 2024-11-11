#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*des;
	unsigned char	*sr;
	size_t			i;

	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}

// int main()
// {
//     char src[10] = "hello";
//     char dest[10] = "hello";
//     char dest2[10] = "hello";

//     // ft_memcpy(NULL, src, 1);
//     // printf ("%s\n", dest);

//     memcpy(NULL, src, 0);
//     printf("%s", dest2);

//     return (0);
// }