/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:44:33 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/08 12:30:52 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char    *ft_itoa(int n)
{
	int		size;
	int		is_minus;
	char	*result;

	result = NULL;
	if (n < 0)
	{
		n = n * -1;
		is_minus = 1;
	}
	size = 1;
	while (n)
	{
		n %= 10;
		
	}
	return (result);
}