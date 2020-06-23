/*
** EPITECH PROJECT, 2019
** My_printf fonction
** File description:
** my_printf.c
*/

#include "my.h"

void opt_char(va_list ap, int std)
{
    my_putchar(va_arg(ap, int), std);
}

void opt_str(va_list ap, int std)
{
    my_putstr(va_arg(ap, char *), std);
}

void opt_dec(va_list ap, int std)
{
    my_put_nbr(va_arg(ap, int), std);
}

void my_option(char flag, va_list(ap), int std)
{
    int inc = 0;
    const char *my_flags = "csd";
    void (*board[3])(va_list, int) = {&opt_char, &opt_str, &opt_dec};

    while (my_flags[inc] != '\0') {
        if (my_flags[inc] == flag)
            board[inc](ap, std);
        inc = inc + 1;
    }
}

void my_printf(int std, char *str, ...)
{
    va_list(ap);
    va_start(ap, *str);
    int inc = 0;

    while (str[inc] != '\0') {
        if (str[inc] == '%') {
            my_option(str[inc + 1], ap, std);
            inc = inc + 1;
        }
        else
            my_putchar(str[inc], std);
        inc = inc + 1;
    }
    va_end(ap);
}