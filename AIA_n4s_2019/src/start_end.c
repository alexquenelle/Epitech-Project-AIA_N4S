/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** start_end.c
*/

#include "my.h"

int check_error_start(char s)
{
    char *cmp = "056";
    int inc = 0;

    while (cmp[inc] != '\0')
    {
        if (cmp[inc] == s)
            return (1);
        inc = inc + 1;
    }
    return (0);
}

int start_simuation(ai_t *ai)
{
    int back = 0;
    char **check = NULL;

    dprintf(1, "START_SIMULATION\n");
    if (getline(&ai->buffer, &ai->size, stdin) == 0)
        return (84);
    back = check_error_start(ai->buffer[0]);
    if (back == 84)
        return (84);
    check = convert(ai->buffer, 0);
    if (check == NULL)
        return (84);
    return (0);
}

void stop_simulation(char *buffer, size_t size)
{
    dprintf(1, "STOP_SIMULATION\n");
    getline(&buffer, &size, stdin);
    dprintf(2, "%s", buffer);
    dprintf(2, "\033[0;32mEND OF THE SIMULATION\n\033[0m");
}