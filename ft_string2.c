/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:09:55 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/07 17:57:52 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void    *ft_memcpy(void * dest, const void * source, size_t num)
{
    char * dest_temp = dest;
    const char * source_temp = source;

    while (num--)
        *dest_temp++ = *source_temp++;
    return dest;
}

void *  ft_memmove(void * dest, const void * source, size_t num)
{
    char * dest_temp = dest;
    const char * source_temp = source;

    while (num--)
        *dest_temp++ = *source_temp++;
    return dest;
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int		index;

	index = 0;
	while (src[index] && index + 1 < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}

size_t    ft_strlcat(char * dest, const char * src, size_t size)
{
    unsigned int        dest_index;
    unsigned int        src_index;
    unsigned int        total_size;

    dest_index = 0;
    src_index = 0;
    total_size = ft_strlen(dest) + ft_strlen(src);
    while (dest[dest_index])
        dest_index++;

    while (src[src_index] && src_index + dest_index + 1 < size)
        dest[dest_index++] = src[src_index++];
    dest[dest_index] = '\0';
    return (total_size);
}