/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** avoid_crash.c
*/

#include "my.h"

int avoid_crash(ai_t *ai, int max_value)
{
    float wheels = 0.00;

    if (atoi(ai->board[max_value - 1]) < 100){
        wheels = 1.00;
        dprintf(1, "WHEELS_DIR:%.2f\n", wheels);
        fflush(stdout);
        getline(&ai->buffer, &ai->size, stdin);
        if (check_point_handling(ai) == 2)
            return (2);
    }
    if (atoi(ai->board[0]) < 100){
        wheels = -1.00;
        dprintf(1, "WHEELS_DIR:%.2f\n", wheels);
        fflush(stdout);
        getline(&ai->buffer, &ai->size, stdin);
        if (check_point_handling(ai) == 2)
            return (2);
    }
    return (0);
}