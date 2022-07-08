/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:18:18 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/07 18:05:04 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *  ft_calloc(size_t count, size_t size)
{
    void *  temp;

    temp = malloc(size * count);

    if ((temp = malloc(count * size)) == NULL)
        return (NULL);
    ft_bzero(temp, (count * size));
    return (temp);
}