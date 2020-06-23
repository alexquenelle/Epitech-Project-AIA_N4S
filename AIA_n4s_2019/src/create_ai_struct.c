/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** create_ai_struct.c
*/

#include "my.h"

ai_t *create_my_ai_struct(void)
{
    ai_t *ai = malloc(sizeof(ai_t));

    if (ai == NULL)
        return (NULL);
    ai->size = 10;
    ai->buffer = malloc(sizeof(char) * (ai->size + 1));
    if (ai->buffer == NULL)
        return (NULL);
    ai->board = NULL;
    ai->end = 0;
    return (ai);
}