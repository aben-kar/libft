/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:54 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 15:56:39 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	if (!s1 || !s2)
		return (0);
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while (i < n && st1[i] == st2[i] && (st1[i] || st2[i]))
		i++;
	if (i == n)
		return (0);
	return (st1[i] - st2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp(NULL, "hello", 1));
// 	//printf ("%d", memcmp(NULL, NULL, 2));
// }