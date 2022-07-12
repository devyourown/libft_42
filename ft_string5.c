/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:13:32 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/08 14:18:29 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  get_num_of_words(char const * str, char delimeter)
{
    size_t         result;
    int             index;

    result = 0;
    index = 0;
    while (str[index])
    {
        if (str[index] == delimeter)
            result++;
        index++;
    }
    return (result + 1);
}

static size_t   get_size_of_word(char const * str, char end_point)
{
    size_t      result;

    result = 0;
    while (str[result] && str[result] != end_point)
        result++;
    return (result);
}

char    **ft_split(char const *s, char c)
{
    char            **result;
    char            *trimmed;
    size_t          str_index;
    size_t          index;
    const char      *temp;

    temp = &c;
    trimmed = ft_strtrim(s, temp);
    result = (char **)malloc(sizeof(char *) * (get_num_of_words(trimmed, c) + 1));
    if (!result)
        return (NULL);
    str_index = 0;
    index = 0;
    while (index < get_num_of_words(trimmed, c) && str_index < ft_strlen(trimmed))
    {
        result[index++] = ft_substr(trimmed, str_index, get_size_of_word(&trimmed[str_index], c));
        str_index = str_index + get_size_of_word(&trimmed[str_index], c) + 1;
    }
    result[index] = 0;
    return (result);
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