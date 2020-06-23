/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** car_simulation.c
*/

#include "my.h"

int processing_direction(ai_t *ai)
{
    if (find_str(ai->buffer, "CP Cleared") == 1
    && my_array_size(ai->board) > 32)
        ai->board = cut_board(ai->board, my_array_size(ai->board));
    if (atoi(ai->board[16]) < 700)
    {
        if (wheels_directions(ai) == 2)
            return (2);
    } else
    {
        if (go_ahead(ai) == 2)
            return (2);
    }
    return (0);
}

int my_simulation(ai_t *ai)
{
    while (find_str(ai->buffer, "Track Cleared") != 1 || ai->end != 1) {
        dprintf(1, "GET_INFO_LIDAR\n");
        getline(&ai->buffer, &ai->size, stdin);
        dprintf(2, "\033[0;31m%s\n\033[0m", ai->buffer);
        if (check_point_handling(ai) == 2)
            return (2);
        ai->board = convert(ai->buffer, 1);
        if (processing_direction(ai) == 1)
            return (2);
    }
    return (0);
}

int ai_car_simulation(ai_t *ai)
{
    if (start_simuation(ai) == 84)
        return (84);
    my_simulation(ai);
    stop_simulation(ai->buffer, ai->size);
    return (0);
}