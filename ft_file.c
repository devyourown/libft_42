/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:09:01 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/12 11:14:56 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

void    ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

static size_t	get_size(int n)
{
	size_t		    result;
	unsigned int    temp;

	result = 1;
	temp = n;
	if (n < 0)
	{
		result += 1;
		temp = -n;
	}
	while (temp > 10)
	{
		temp /= 10;
		result++;
	}
	return (result);
}

void    ft_putnbr_fd(int n, int fd)
{
    write(fd, ft_itoa(n), get_size(n));
}