/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:52 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 20:49:50 by acben-ka         ###   ########.fr       */
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
		while (find[j] && str[i + j] == find[j])
			j++;
		if (find[j] == '\0')
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char  *big = "";
//      const char  *little = "hr";
//     char    *t;
//     t = ft_strnstr(big, little, 0);
//     printf("%s\n", t);
    
// 	// char    *t2;
//     // t2 = strnstr(NULL, little, 0);
//     // printf ("%s", t2);
//     return (0);
// }
