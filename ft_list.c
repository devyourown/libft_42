/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:20:35 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/12 11:22:06 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *result;

    result = (t_list *)malloc(sizeof(t_list));

    return (result);
} 