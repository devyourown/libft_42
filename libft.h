/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:59:42 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/08 12:48:32 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H
# define __LIBFT_H

#include <unistd.h>
#include <stdlib.h>

# define    MAX_INT 2147483647
# define    MIN_INT -2147483648

int	ft_isalpha(int num);
int	ft_isdigit(int num);
int ft_isalnum(int num);
int ft_isascii(int num);
int ft_isprint(int num);
int ft_toupper(int num);
int ft_tolower(int num);

size_t ft_strlen(const char *str);
const char *ft_strchr(const char *s, int c);
const char *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

void * ft_memset(void * b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *  ft_memcpy(void * dest, const void * source, size_t num);
void *  ft_memmove(void * dest, const void * source, size_t num);
void    *ft_memchr(const void *s, int c, size_t n);

size_t  ft_strlcpy(char * dest, const char * src, size_t size);
size_t    ft_strlcat(char * dest, const char * src, size_t size);
char    *ft_strnstr(const char * haystack, const char * needle, size_t len);
int     ft_atoi(const char * str);
char    *ft_itoa(int n);

void *  ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *src);

char    *ft_substr(char const *s, size_t start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const * s1, char const *set);
char    **ft_split(char const *s, char c);

#endif
