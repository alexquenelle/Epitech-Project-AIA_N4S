/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** left_or_right.c
*/

#include "my.h"

int backwards(ai_t *ai)
{
    dprintf(1, "STOP_SIMULATION\n");
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
        return (2);
    return (0);
}

int go_right(ai_t *ai)
{
    float wheels = 0.00;

    wheels = -0.3;
    dprintf(1, "WHEELS_DIR:%.2f\n", wheels);
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
        return (2);
    return (0);
}

int go_left(ai_t *ai)
{
    float wheels = 0.00;

    wheels = 0.3;
    dprintf(1, "WHEELS_DIR:%.2f\n", wheels);
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
        return (2);
    return (0);
}

int go_ahead(ai_t *ai)
{
    dprintf(1, "CAR_FORWARD:0.6\n");
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
            return (2);
    dprintf(1, "WHEELS_DIR:0\n");
    fflush(stdout);
    getline(&ai->buffer, &ai->size, stdin);
    if (check_point_handling(ai) == 2)
            return (2);
    return (0);
}