/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** test_my_printf.c
*/

#include "my.h"

Test(my_printf, print_string, .init = redirect_all_stdout)
{
    my_printf(1, "Hello %s", "There");
    cr_assert_stdout_eq_str("Hello There");
}

Test(my_printf, print_combined, .init = redirect_all_stdout)
{
    my_printf(1, "Hello %chere", 'T');
    cr_assert_stdout_eq_str("Hello There");
}

Test(my_printf, print_nbr, .init = redirect_all_stdout)
{
    my_printf(1, "Hello %dhere", 7);
    cr_assert_stdout_eq_str("Hello 7here");
}