/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:20:19 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 15:42:16 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (total_size == 0)
		total_size = 1;
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main() {
//     size_t num = 0;
//     size_t size = sizeof(int);
//    // size_t i = 0;

//     char *array = calloc(num, size);

//    // while (i < num)
//     //{
//         printf("%d\n", *array);
//         //i++;
//     //}
//     free(array);
//     return (0);
// }