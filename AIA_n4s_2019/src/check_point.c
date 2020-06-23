/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** check_point.c
*/

#include "my.h"

int check_check_point(ai_t *ai, char **cp, int cy)
{
    if (find_str(ai->buffer, cp[cy]) == 1 && cy == 3) {
        dprintf(2, "\033[0;32mTRACK ENDED\n%s\n\033[0m", cp[cy]);
        ai->end = 1;
        return (2);
    }
    if (find_str(ai->buffer, cp[cy]) == 1) {
        dprintf(2, "\033[0;32m%s\n\033[0m", cp[cy]);
        return (1);
    }
    return (0);
}

int check_point_handling(ai_t *ai)
{
    int cy = 0;
    int back = 0;
    char *cp[5] = {
        "First CP Cleared",
        "CP Cleared",
        "Lap Cleared",
        "Track Cleared",
        NULL
    };

    while (cp[cy] != NULL) {
        back = check_check_point(ai, cp, cy);
        if (back != 0)
            return (back);
        cy = cy + 1;
    }
    return (0);
}