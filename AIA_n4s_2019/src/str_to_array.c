/*
** EPITECH PROJECT, 2019
** New_Shell
** File description:
** str_to_array.c
*/

#include "my.h"

int my_char_is_alpha(char c)
{
    if ((c >= '0' && c <= '9') || c == '.')
        return (1);
    return (0);
}

int calc_arr_size(char *str)
{
    int inc = 0;
    int nbr = 1;

    while (str[inc] != '\0')
    {
        if (my_char_is_alpha(str[inc]) == 1)
            nbr = nbr + 1;
        inc = inc + 1;
    }
    return (nbr);
}

int calc_str_len(char *str, int inc)
{
    while (my_char_is_alpha(str[inc]) == 1)
        inc = inc + 1;
    return (inc);
}

char *copy_str_to_array(char *str, int inc)
{
    int cx = 0;
    char *board = malloc(sizeof(char) * (calc_str_len(str, inc) + 1));

    while (my_char_is_alpha(str[inc]) == 1 && str[inc])
    {
        board[cx] = str[inc];
        cx = cx + 1;
        inc = inc + 1;
    }
    board[cx] = '\0';
    return (board);
}

char **convert(char *str, int inc)
{
    char **board = NULL;
    int cy = 0;

    if (str == NULL)
        return (NULL);
    board = malloc(sizeof(char *) * (calc_arr_size(str) + 1));
    if (board == NULL)
        return (NULL);
    while (str[inc] != '\0' && str[inc]) {
        if (my_char_is_alpha(str[inc]) == 1 && str[inc] != '\0') {
            board[cy] = copy_str_to_array(str, inc);
            while (my_char_is_alpha(str[inc]) == 1 && str[inc])
                inc = inc + 1;
            cy = cy + 1;
        }
        inc = inc + 1;
    }
    board[cy] = NULL;
    return (board);
}