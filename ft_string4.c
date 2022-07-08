/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:33 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/08 14:15:58 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char                *str;
    unsigned int		index;

    str = (unsigned char *)s;
	index = 0;
	while (str[index] && index < n)
	{
		if (str[index] == c)
			return (&str[index]);
		index++;
	}
	return (0);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char           *str1;
    unsigned char           *str2;
    size_t                  index;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

	index = 0;
	while (*str1 == *str2 && index < n)
	{
		s1++;
		s2++;
		index++;
	}
	if (*str1-*str2 > 0)
		return (1);
	else if (*str1-*str2 < 0)
		return (-1);
	return (0);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t      index;
    size_t      needle_index;

    index = 0;
    if (!(*needle))
        return ((char *)haystack);
    while (index < len)
    {
        if (haystack[index] == needle[0])
        {
            needle_index = 1;
            while ('\0' != needle[needle_index] && index + needle_index < len)
            {
                if (haystack[index + needle_index] != needle[needle_index])
                    break;
                needle_index++;
            }
            if (0 == needle[needle_index])
                return ((char *)&haystack[index]);
        }
        index++;
    }
    return (0);
}

int     ft_atoi(const char * str)
{
    int		index;
	int		is_minus;
	int		result;

	index = 0;
	is_minus = 1;
	result = 0;
	while ((9 <= str[index] && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			is_minus *= -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		result = result * 10 + str[index] - 48;
		index++;
	}
	return (result * is_minus);
}

static size_t	get_size(int n)
{
	size_t		result;
	unsigned int temp;

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

char    *ft_itoa(int n)
{
	int				size;
	char			*result;
	unsigned int	temp;

	size = get_size(n);
	temp = n;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (n < 0)
		temp = -n;
	while (size != -1)
	{
		result[--size] = (temp % 10) + 48;
		temp /= 10;
	}
	if (n < 0)
		result[0] = '-';
	result[size] = '\0';
	return (result);
}