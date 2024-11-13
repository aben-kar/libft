/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-kar <aben-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:56 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 23:50:21 by aben-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	if (c == 0)
		return ((char *)&str[len]);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr(NULL, 'a'));

// 	//printf("%s", strrchr(NULL, 'a'));
// 	return (0);
// }
