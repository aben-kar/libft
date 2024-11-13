/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-kar <aben-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:54 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 23:57:24 by aben-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp(NULL, "hello", 1));
// 	//printf ("%d", memcmp(NULL, NULL, 2));
// }