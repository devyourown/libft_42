/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:59:16 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/07 20:24:44 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

const char * ft_strchr(const char *str, int c)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (&str[index]);
		index++;
	}
	return (0);
}

const char * ft_strrchr(const char *str, int c)
{
	int index;

	index = ft_strlen(str) - 1;
	while (str[index])
	{
		if (str[index] == c)
			return (&str[index]);
		index--;
	}
	return 0;
}

void * ft_memset(void * b, int c, size_t len)
{
	unsigned char	*temp;
	unsigned int	index;

	index = 0;
	temp = (unsigned char *)b;
	while (index < len)
	{
		temp[index++] = c;
	}
	return temp;
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		index;

	index = 0;
	while (*s1 == *s2 && index < n)
	{
		s1++;
		s2++;
		index++;
	}
	if (*s1-*s2 > 0)
		return (1);
	else if (*s1-*s2 < 0)
		return (-1);
	return (0);
}