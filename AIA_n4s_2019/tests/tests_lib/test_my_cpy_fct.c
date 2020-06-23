/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** test_my_board.c
*/

#include "my.h"

Test(my_strdup, malloc_and_copy)
{
    char *get = "Test Criterion";
    char *copy = my_strdup(get);
    cr_assert_str_eq(get, copy);
}

Test(my_strdup, dup_null)
{
    char *get = "Test Criterion";
    char *copy = my_strdup(NULL);
    cr_assert_null(copy);
}

Test(my_strcat, concat_two_str)
{
    char *bfr = "Test ";
    char *aft = "Criterion";
    char *get = "Test Criterion";
    char *cpy = my_strcat(bfr, aft);
    cr_assert_str_eq(get, cpy);
}

Test(my_strcat, concat_null)
{
    char *bfr = "Test ";
    char *aft = "Criterion";
    char *get = "Test Criterion";
    char *copy = my_strcat(NULL, NULL);
    cr_assert_null(copy);
}

Test(my_strcat_add, concat_two_str_add)
{
    char *bfr = "Test";
    char *aft = "Criterion";
    char *get = "Test Criterion";
    char *cpy = my_strcat_add(bfr, aft, ' ');
    cr_assert_str_eq(get, cpy);
}