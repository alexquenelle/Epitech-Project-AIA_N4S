/*
** EPITECH PROJECT, 2019
** My_atoi fonction
** File description:
** my_atoi.c
*/

#include "my.h"

int my_strlen(char *str)
{
    int inc = 0;

    if (str == NULL)
        return (-1);
    while (str[inc] != '\0')
        inc = inc + 1;
    return (inc);
}

int my_atoi(char *str)
{
    int nbr = 0;
    int neg = 1;
    int inc = 0;

    while (str[inc] == '+' || str[inc] == '-') {
        if (str[inc] == '-')
            neg = neg * -1;
        inc = inc + 1;
    }
    while (str[inc] != '\0') {
        if (str[inc] >= '0' && str[inc] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[inc] - 48;
            inc = inc + 1;
        }
        else
            return (nbr * neg);
    }
    return (nbr * neg);
}

int my_strcmp(char *str1, char *str2)
{
    int inc = 0;

    while (str1[inc] == str2[inc] && str1[inc] != '\0' && str2[inc] != '\0')
        inc = inc + 1;
    return (str1[inc] - str2[inc]);
}