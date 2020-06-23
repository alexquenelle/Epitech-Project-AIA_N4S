/*
** EPITECH PROJECT, 2019
** AIA_n4s_2019
** File description:
** but_my_board.c
*/

#include "my.h"

int my_array_size(char **board)
{
    int cy = 0;

    while (board[cy] != NULL)
        cy = cy + 1;
    return (cy);
}

char **cut_board(char **board, int size)
{
    int cy = 0;
    int max = size - 3;
    char **new = malloc(sizeof(char *) * (size - 3 + 1));

    while (cy < max)
    {
        new[cy] = my_strdup(board[cy]),
        cy = cy + 1;
    }
    new[cy] = NULL;
    return (new);
}