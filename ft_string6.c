/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:56:46 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/12 11:24:39 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *      result;
    size_t      index;

    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!result)
        return NULL;
    index = 0;
    while (index < ft_strlen(s))
    {
        result[index] = f(index, s[index]);
        index++;
    }
    result[index] = 0;

    return (result);
}

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t      index;

    index = 0;
    while (index < ft_strlen(s))
    {
        f(index, &s[index]);
        index++;
    }
}