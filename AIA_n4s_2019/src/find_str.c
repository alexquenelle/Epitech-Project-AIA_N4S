/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** find_str.c
*/

#include "my.h"

int find_str_cmp(char *str, char *find, int inc, int size)
{
    int cmp = 0;

    while (cmp < size && str[inc] == find[cmp]
    && str[inc] != '\0' && find[cmp] != '\0')
    {
        inc = inc + 1;
        cmp = cmp + 1;
    }
    return (cmp);
}

int check_find_cmp(char *str, char *find, int inc, int size)
{
    if (str[inc] == find[0])
    {
        if (find_str_cmp(str, find, inc, size) == size)
            return (1);
    }
    return (0);
}

int find_str(char *str, char *find)
{
    int size = my_strlen(find);
    int inc = 0;
    int back = -1;

    while (str[inc] != '\0')
    {
        if (check_find_cmp(str, find, inc, size) == 1)
            return (1);
        inc = inc + 1;
    }
    return (0);
}