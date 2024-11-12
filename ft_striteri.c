/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:21:50 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 20:26:23 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_function(unsigned int i, char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= i;
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (!s)
		return ;
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int	main(void)
// {
// 	char s[] = "hello";
// 	ft_striteri(s, my_function);
// 	printf("%s", s);
// 	return (0);
// }
