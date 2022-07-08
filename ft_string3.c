/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:10:41 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/08 12:56:45 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		length;
	int		index;
	char	*dest;

	index = 0;
	length = ft_strlen(src);
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (dest);
}

char    *ft_substr(char const *s, size_t start, size_t len)
{
    char            *substr;
    size_t          index;

    index = 0;
    if (len > ft_strlen(&s[start]))
        len = ft_strlen(&s[start]);
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (substr == NULL)
        return (NULL);

    while (index < len)
        substr[index++] = s[start++];
    substr[index] = 0;
    return (substr);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char        *joined_str;

    joined_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    ft_strlcat(joined_str, s1, ft_strlen(s1));
    ft_strlcat(joined_str, s2, ft_strlen(s2));

    return joined_str;
}

char    *ft_strtrim(char const * s1, char const *set)
{
    char        *str;
    int         front_index;
    int         rear_index;

    str = NULL;
    if (s1 != 0 && set != 0)
    {
        front_index = 0;
        rear_index = ft_strlen(s1);
        while (s1[front_index] && ft_strchr(set, s1[front_index]))
            front_index++;;
        while (s1[rear_index - 1] && ft_strchr(set, s1[rear_index - 1]) && rear_index > front_index)
            rear_index--;
        str = (char *)malloc(sizeof(char) * (rear_index - front_index + 1));
        if (str)
            ft_strlcpy(str, &s1[front_index], rear_index - front_index + 1);
    }
    return (str);
}