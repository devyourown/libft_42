/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CUnit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:55:39 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/06 16:46:08 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CUnit.h"
#include <string.h>
#include <stdio.h>

void name_test(char * name)
{
	printf("%s : \n", name);
}

void print_test_result(int result)
{
	printf("\t테스트 결과 : ");
	if (result == TRUE)
	{
		printf("\x1b[32m 통과 \x1b[0m \n");
	} else {
		printf("\x1b[31m 실패 \x1b[0m \n");
	}
}

void assert_int_equal(int actual, int expected)
{
	if (actual == expected)
		print_test_result(TRUE);
	else
		print_test_result(FALSE);
	printf("\tactual : %3d, expected : %3d\n", actual, expected);
}

void assert_char_equal(char actual, char expected)
{
	if (actual == expected)
		print_test_result(TRUE);
	else
		print_test_result(FALSE);
	printf("\tactual : %c, expected : %c\n", actual, expected);
}

void assert_str_equal(const char * actual, const char * expected)
{
	if ((actual == (void *)0 && expected == (void *)0) || strcmp(actual, expected) == 0)
		print_test_result(TRUE);
	else
		print_test_result(FALSE);
	printf("\tactual : %s, expected : %s\n", actual, expected);
}
