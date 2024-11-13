/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-kar <aben-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:52 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/13 01:51:21 by aben-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (find[j] && str[i + j] == find[j] && (i + j) < n)
			j++;
		if (find[j] == '\0')
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}
// int main()
// {
//     const char  *big = "abcdhgd";
//     const char  *little = "abc";
//     char    *t;
//     t = ft_strnstr(big, little, 2);
//     if (t) 
// 		printf("%s\n", t);
//     return (0);
// }
