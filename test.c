/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:03:20 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/12 11:25:58 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CUnit.h"
#include <ctype.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void test_is_alpha(void)
{
	name_test("is_alpha_test");
	assert_int_equal(isalpha(3), ft_isalpha(3));
	assert_int_equal(isalpha(65), ft_isalpha(65));
	assert_int_equal(isalpha(200), ft_isalpha(200));
	assert_int_equal(isalpha(3000), ft_isalpha(3000));
}

void test_is_digit(void)
{
	name_test("is_digit_test");
	assert_int_equal(isdigit(42), ft_isdigit(42));
	assert_int_equal(isdigit(49), ft_isdigit(49));
	assert_int_equal(isdigit(3000), ft_isdigit(3000));
}

void test_is_alnum(void)
{
	name_test("is_alnum_test");
	assert_int_equal(isalnum(32), ft_isalnum(32));
	assert_int_equal(isalnum(255), ft_isalnum(255));
	assert_int_equal(isalnum(67), ft_isalnum(67));
	assert_int_equal(isalnum(0), ft_isalnum(0));
}

void test_is_print(void)
{
	name_test("is_print_test");
	assert_int_equal(isprint(11), ft_isprint(11));
	assert_int_equal(isprint(0), ft_isprint(0));
	assert_int_equal(isprint(256), ft_isprint(256));
	assert_int_equal(isprint(65), ft_isprint(65));
	assert_int_equal(isprint(300), ft_isprint(300));
}

void test_is_ascii(void)
{
	name_test("is_ascii_test");
	assert_int_equal(isascii(13), ft_isascii(13));
	assert_int_equal(isascii(0), ft_isascii(0));
	assert_int_equal(isascii(255), isascii(255));
	assert_int_equal(isascii(256), isascii(256));
}

void test_strlen(void)
{
	name_test("strlen_test");
	assert_int_equal(strlen("asd123"), ft_strlen("asd123"));
	assert_int_equal(strlen(""), ft_strlen(""));
	assert_int_equal(strlen("abcdefghk"), ft_strlen("abcdefghk"));
}

void test_to_upper()
{
	name_test("toupper_test");
	assert_int_equal(toupper(1), ft_toupper(1));
	assert_int_equal(toupper(98), ft_toupper(98));
	assert_int_equal(toupper(65), ft_toupper(65));
}

void test_to_lower()
{
	name_test("tolower_test");
	assert_int_equal(tolower(1), ft_tolower(1));
	assert_int_equal(tolower(65), ft_tolower(65));
	assert_int_equal(tolower(120), ft_tolower(120));
}

void test_strchr()
{
	name_test("strchr_test");
	assert_str_equal(strchr("test", 116), ft_strchr("test", 116));
	assert_str_equal(strchr("Memory", 'm'), ft_strchr("Memory", 'm'));
	assert_str_equal(strchr("dorang", 'w'), ft_strchr("dorang", 'w'));
}

void test_strrchr()
{
	name_test("strrchr_test");
	assert_str_equal(strrchr("dorang", 'w'), ft_strrchr("dorang", 'w'));
	assert_str_equal(strrchr("Memory", 'm'), ft_strrchr("Memory", 'm'));
	assert_str_equal(strrchr("Memormy", 'm'), ft_strrchr("Memormy", 'm'));
}

void test_memset()
{
	char actual[30] = "block man";
	char expected[30] = "block man";
	name_test("memset_test");
	assert_str_equal(
		memset(actual, 'c', 5 * sizeof(char)), 
		ft_memset(expected, 'c', 5 * sizeof(char)));
}

void	test_strncmp()
{
	name_test("strncmp_test");
	assert_int_equal(strncmp("1234", "1234", 3), ft_strncmp("1234", "1234", 3));
	assert_int_equal(strncmp("", "", 3), ft_strncmp("", "", 3));
	assert_int_equal(strncmp("124", "124", 2000), ft_strncmp("124", "124", 2000));
	assert_int_equal(strncmp("124", "abcdef", 2000), ft_strncmp("124", "abcdef", 2000));
	assert_int_equal(strncmp("abcdef", "124", 2000), ft_strncmp("abcdef", "124", 2000));
}

void	test_bzero()
{
	name_test("bzero_test");
	char actual[30] = "block man";
	char expected[30] = "block man";
	ft_bzero(expected, 3);
	bzero(actual, 3);
	assert_str_equal(actual, expected);
}

void	test_memcpy()
{
	name_test("memcpy_test");
	char * actual_source = "source";
	char actual_dest[10] = "ppp";
	char * expected_source = "source";
	char expected_dest[10] = "ppp";
	memcpy(actual_dest, actual_source, 7);
	ft_memcpy(expected_dest, expected_source, 7);
	assert_str_equal(actual_dest, expected_dest);
}

void	test_memmove()
{
	name_test("memmove_test");
	char * actual_source = "source";
	char actual_dest[10] = "ppp";
	char * expected_source = "source";
	char expected_dest[10] = "ppp";
	memmove(actual_dest, actual_source, 10);
	ft_memmove(expected_dest, expected_source, 10);
	assert_str_equal(actual_dest, expected_dest);

}

void	test_strlcpy()
{
	name_test("strlcpy_test");
	char * actual_source = "source";
	char actual_dest[10] = "ppp";
	char * expected_source = "source";
	char expected_dest[10] = "ppp";
	strlcpy(actual_dest, actual_source, 4);
	ft_strlcpy(expected_dest, expected_source, 4);
	assert_str_equal(actual_dest, expected_dest);
}

void	test_strlcat()
{
	name_test("strlcat_test");
	char * actual_source = "source";
	char actual_dest[10] = "ppp";
	char * expected_source = "source";
	char expected_dest[10] = "ppp";
	strlcat(actual_dest, actual_source, 5);
	ft_strlcat(expected_dest, expected_source, 5);
	assert_str_equal(actual_dest, expected_dest);
}

void	test_calloc()
{
	name_test("calloc_test");
	int * actual = (int *)calloc(4, 6);
	int * expected = (int *)ft_calloc(4, 6);
	assert_int_equal(actual[0], expected[0]);
}

void	test_strdup()
{
	name_test("strdup_test");
	char * actual_dest;
	char * expected_dest;
	actual_dest = strdup("what's the matter"); 
	expected_dest = ft_strdup("what's the matter");
	assert_str_equal(actual_dest, expected_dest);
}

void	test_strnstr()
{
	name_test("strnstr test : ");
	strnstr("you are the boy i'm", "ou", 2);
	char * actual = strnstr("you are the boy i'm", "ou", 45);
	char * expected = ft_strnstr("you are the boy i'm", "ou", 45);
	assert_str_equal(actual, expected);
}

void	test_atoi()
{
	name_test("atoi test : ");
	assert_int_equal(atoi("1001"), ft_atoi("1001"));
	assert_int_equal(atoi("-110"), ft_atoi("-110"));
	assert_int_equal(atoi("-1100-12"), ft_atoi("-1100-12"));
	assert_int_equal(atoi("0123-123"), ft_atoi("0123-123"));
}

void test_strtrim()
{
	name_test("strtrim test : ");
	assert_str_equal("11122", ft_strtrim("  11122  a", "a "));
	assert_str_equal("Hi My Name is", ft_strtrim("  Hi My Name is ", " "));
}

void test_split()
{
	name_test("split test : ");
	assert_str_equal("Hi", ft_split("    Hi My Name is ", ' ')[0]);
	assert_str_equal("My", ft_split("Hi My Name is ", ' ')[1]);
	assert_str_equal("Name", ft_split("Hi My Name is ", ' ')[2]);
	assert_str_equal("is", ft_split("Hi My Name is ", ' ')[3]);
	//ft_split("Hi My Name is ", ' ');
}

void test_substr()
{
	name_test("substr test : ");
	assert_str_equal("Hii", ft_substr("Hii buddy", 0, 3));
}

void test_itoa()
{
	name_test("itoa test : ");
	assert_str_equal("1234", ft_itoa(1234));
	assert_str_equal("-1234", ft_itoa(-1234));
	assert_str_equal("0", ft_itoa(0));
	assert_str_equal("-2147483648", ft_itoa(MIN_INT));
	assert_str_equal("2147483647", ft_itoa(MAX_INT));
}

void	test_file()
{
	name_test("file.c test : ");
	ft_putchar_fd('h', 1);
	ft_putstr_fd("test", 1);
	ft_putendl_fd("the next one", 1);
	ft_putnbr_fd(-12345, 1);
}

void suite_part1()
{
	test_is_alpha();
	test_is_digit();
	test_is_alnum();
	test_is_ascii();
	test_is_print();
	test_strlen();
	test_to_lower();
	test_to_upper();
	test_strchr();
	test_strrchr();
	test_memset();
	test_strncmp();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_calloc();
	test_strdup();
	test_strnstr();
	test_atoi();
}

int main(void)
{
	//suite_part1();
	test_strtrim();
	test_split();
	test_substr();
	test_itoa();
	//test_file();

	return 0;
}