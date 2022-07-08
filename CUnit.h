/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CUnit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojulee <hyojulee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:51:56 by hyojulee          #+#    #+#             */
/*   Updated: 2022/07/06 17:48:08 by hyojulee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CUNIT_H
# define __CUNIT_H

# define TRUE	1
# define FALSE	0

void assert_int_equal(int actual, int expected);
void assert_str_equal(const char * actual,const char * expected);
void assert_char_equal(char actual, char expected);
void aseert_true(int bool);
void assert_false(int bool);
void print_test_result(int result);
void name_test(char * name);

#endif
