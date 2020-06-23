/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** test_check_point.c
*/

#include "my.h"

Test(check_point_handling, cp_passed)
{
    ai_t *ai = create_my_ai_struct();
    ai->buffer = my_strdup("CP Cleared");
    int get = check_point_handling(ai);
    cr_assert_eq(get, 1);
}

Test(check_point_handling, cp_not_passed)
{
    ai_t *ai = create_my_ai_struct();
    ai->buffer = my_strdup("CP Not Cleared");
    int get = check_point_handling(ai);
    cr_assert_eq(get, 0);
}

Test(check_point_handling, cd_passed_disp, .init = redirect_all_stdout)
{
    ai_t *ai = create_my_ai_struct();
    ai->buffer = my_strdup("CP Cleared");
    int get = check_point_handling(ai);
    cr_assert_stderr_eq_str("\033[0;32mCP Cleared\n\033[0m");
}

Test(check_point_handling, c_passed_not_end, .init = redirect_all_stdout)
{
    ai_t *ai = create_my_ai_struct();
    ai->buffer = my_strdup("Track Cleared");
    int get = check_point_handling(ai);
    cr_assert_stderr_eq_str("\033[0;32mTRACK ENDED\nTrack Cleared\n\033[0m");
}