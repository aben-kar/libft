/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:56 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 20:53:40 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen((char *)str);
	while (len > 0)
	{
		if (str[len - 1] == (char)c)
			return ((char *)&str[len - 1]);
		len--;
	}
	if ((char)c == '\0')
		return ((char *)&str[len]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr(NULL, 'a'));

// 	//printf("%s", strrchr(NULL, 'a'));
// 	return (0);
// }
