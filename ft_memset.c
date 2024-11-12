/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:21:01 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 16:24:38 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int vl, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)vl;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	// int arr[4] = {0, 10, 100, 1000};
// 	// ft_memset(&arr[2], 5, 2);
// 	// ft_memset(arr + 2, 57, 1);
// 	// printf("%d\n", arr[2]);

// 	// int nb;
// 	// ft_memset(&nb, 5, 2);
// 	// ft_memset(&nb, 57, 1);
// 	// printf ("%d", nb);

// 	char sr[] = "poooooool";
// 	ft_memset(&sr[2], '1', 1);
// 	ft_memset(&sr[3], '3', 1);
// 	ft_memset(&sr[4], '3', 1);
// 	ft_memset(&sr[5], '7', 1);
// 	printf ("%s", sr);
// }