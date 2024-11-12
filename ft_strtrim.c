/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:23:00 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 21:04:38 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct my_variable{
	size_t	len_s1;
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dest;
	size_t	k;
};

char	*ft_strtrim(char const *s1, char const *set)
{
	struct my_variable s;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	s.len_s1 = ft_strlen(s1);
	s.i = 0;
	while (s1[s.i] && ft_strchr(set, s1[s.i]))
		s.i++;
	s.j = s.len_s1 - 1;
	while (s.j > s.i && ft_strchr(set, s1[s.j]))
		s.j--;
	s.len = s.j - s.i + 1;
	s.dest = (char *)malloc((s.len + 1) * sizeof(char));
	if (s.dest == NULL)
		return (NULL);
	s.k = 0;
	while (s.k < s.len && s1[s.i + s.k])
	{
		s.dest[s.k] = s1[s.i + s.k];
		s.k++;
	}
	s.dest[s.k] = '\0';
	return (s.dest);
}

// int	main(void)
// {
// 	// char s1[100] = "!hehlo, worldccccccccccch!eh";
// 	// char set[100] = "!eh";
// 	char *str = ft_strtrim("!hehlo, worldccccccccccch!eh", NULL);
// 	printf("%s\n", str);
// }