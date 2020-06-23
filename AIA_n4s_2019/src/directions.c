/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** directions.c
*/

#include "my.h"

int change_direction(ai_t *ai, int max_value)
{
    if (atoi(ai->board[0]) < atoi(ai->board[max_value - 1]))
    {
        if (go_right(ai) == 2)
            return (2);
    }
    else if (atoi(ai->board[0]) > atoi(ai->board[max_value - 1]))
    {
        if (go_left(ai) == 2)
            return (2);
    }
    return (0);
}

int wheels_directions(ai_t *ai)
{
    int max_value = len_board(ai->board);
    float wheels;

    dprintf(1, "CAR_FORWARD:0.4\n");
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
        return (2);
    if (avoid_crash(ai, max_value) == 2)
        return (2);
    if (change_direction(ai, max_value) == 2)
        return (2);
    return (0);
}