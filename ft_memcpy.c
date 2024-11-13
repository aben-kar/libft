/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:58 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 16:15:00 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*des;
	unsigned char	*sr;
	size_t			i;

	if (!dest || !src)
		return (NULL);
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
//     char dest[10];
//     char dest2[10];

//     ft_memcpy(dest, NULL, 0);
//     printf ("%s\n", dest);

//     // memcpy(dest2, NULL, 2);
//     // printf("%s", dest2);

//     return (0);
// }