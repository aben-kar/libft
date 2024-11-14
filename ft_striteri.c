/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-kar <aben-kar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:07:45 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/14 14:55:36 by aben-kar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	my_function(unsigned int i, char *str)
// {
// 	if (*str >= 'a' && *str <= 'z')
// 		*str -= 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char *s;

// 	s = "hello";
// 	ft_striteri(s, my_function);
// 	printf("%s", s);
// 	return (0);
// }