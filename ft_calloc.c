#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (num == 0 || size == 0)
	{
		ft_bzero(ptr, 1);
		return (ptr);
	}
	ft_bzero(ptr, num);
	return (ptr);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_calloc(-1, 0);
// 	printf("%d\n", ptr[0]);
// }