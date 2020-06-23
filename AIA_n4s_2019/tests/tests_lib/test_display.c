/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** tests_my_display.c
*/

#include "my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, pos_nbr, .init = redirect_all_stdout)
{
    my_put_nbr(190, 1);
    cr_assert_stdout_eq_str("190");
}

Test(my_put_nbr, neg_nbr, .init = redirect_all_stdout)
{
    my_put_nbr(-9, 1);
    cr_assert_stdout_eq_str("-9");
}

Test(my_put_nbr, neg_nbr_two, .init = redirect_all_stdout)
{
    my_put_nbr(-11, 1);
    cr_assert_stdout_eq_str("-11");
}

Test(my_putstr, print_str, .init = redirect_all_stdout)
{
    my_putstr("Hello There", 1);
    cr_assert_stdout_eq_str("Hello There");
}