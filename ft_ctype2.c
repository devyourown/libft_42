/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:26:31 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/06 14:39:23 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int num)
{
    if (num >= 97 && num <= 122)
        return (num - 32);
    return (num);
}

int ft_tolower(int num)
{
    if (num >= 65 && num <= 90)
        return (num + 32);
    return (num);
}