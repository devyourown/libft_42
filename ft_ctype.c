/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:16:44 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/06 14:10:17 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int num)
{
	if (num >= 65 && num <= 90)
		return (1);
	else if (num >= 97 && num <= 122)
		return (1);
	return (0);
}

int	ft_isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int num)
{
	if (num >= 65 && num <= 90)
		return (1);
	if (num >= 97 && num <= 122)
		return (1);
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}

int	ft_isascii(int num)
{
	if (num >= 0 && num <= 256)
		return (1);
	return (0);
}

int	ft_isprint(int num)
{
	if (num >= 32 && num <= 127)
		return (1);
	return (0);
}
