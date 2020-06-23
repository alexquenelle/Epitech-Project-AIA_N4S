/*
** EPITECH PROJECT, 2019
** My display fonction
** File description:
** my_display.c
*/

#include "my.h"

void my_putchar(char c, int std)
{
    write(std, &c, 1);
}

void my_putstr(char *str, int std)
{
    int inc = 0;

    while (str[inc] != '\0') {
        my_putchar(str[inc], std);
        inc = inc + 1;
    }
}

void my_put_nbr(int nb, int std)
{
    if (nb < 0) {
        if (nb > -10) {
            my_putchar('-', std);
            my_putchar((nb * -1) + 48, std);
        } else {
            my_putchar('-', std);
            my_put_nbr((nb / 10) * -1, std);
            my_putchar(((nb % 10) * -1) + 48, std);
        }
    } else if (nb < 10 && nb > 0) {
        my_putchar(nb + 48, std);
    } else {
        if (nb >= 10) {
            my_put_nbr(nb / 10, std);
        }
        my_putchar((nb % 10) + '0', std);
    }
}

int display_board(char **board, int std)
{
    int cy = 0;

    while (board[cy] != NULL) {
        dprintf(std, "%s  ", board[cy]);
        cy = cy + 1;
    }
    dprintf(std, "\n");
    return (cy);
}

int len_board(char **board)
{
    int cy = 0;

    while (board[cy] != NULL) {
        cy = cy + 1;
    }
    return (cy);
}