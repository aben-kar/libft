/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acben-ka <acben-ka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:21:45 by acben-ka          #+#    #+#             */
/*   Updated: 2024/11/12 18:48:56 by acben-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    if (!s1)
        return (NULL);
    size_t len = ft_strlen(s1);
    char *ptr;

    ptr = (char *)ft_calloc((len + 1) , sizeof(char));
    if (ptr == NULL) 
        return NULL;
    ft_memcpy(ptr, s1, len);
    return ptr;
}

// int main()
// {
//     char *str;
//     char *dest = ft_strdup(NULL);
//     printf ("%s\n", dest);
// }