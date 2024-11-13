/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-kar <aben-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:22:43 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 23:36:44 by aben-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	my_upper(unsigned int i, char str)
// {
// 	if (str >= 'a' && str <= 'z')
// 		str -= 32;
// 	return (str);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char add[10] = "hellow";

// 	char *rs = ft_strmapi(add, my_upper);

// 	printf("%s", rs);
// }