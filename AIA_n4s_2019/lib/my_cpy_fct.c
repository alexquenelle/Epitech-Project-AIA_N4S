/*
** EPITECH PROJECT, 2019
** Essential
** File description:
** my_cpy_fct.c
*/

#include "my.h"

char *my_strdup(char *copy)
{
    char *new = malloc(sizeof(char) * (my_strlen(copy) + 1));

    if (new == NULL)
        return (NULL);
    if (my_strcpy(new, copy, 0) == NULL)
        return (NULL);
    return (new);
}

char *my_strcpy(char *new, char *src, int inc)
{
    int start = 0;

    if (new == NULL || src == NULL)
        return (NULL);
    while (src[start] != '\0') {
        new[inc] = src[start];
        inc = inc + 1;
        start = start + 1;
    }
    new[inc] = '\0';
    return (new);
}

char *my_strcat(char *bfr, char *last)
{
    int len = my_strlen(bfr);
    int inc = my_strlen(last);
    char *new = malloc(sizeof(char) * (len + inc + 1));

    if (new == NULL || bfr == NULL || last == NULL)
        return (NULL);
    if (my_strcpy(new, bfr, 0) == NULL)
        return (NULL);
    if (my_strcpy(new, last, len) == NULL)
        return (NULL);
    new[len + inc] = '\0';
    return (new);
}

char *my_strcat_add(char *bfr, char *last, char add)
{
    int len = my_strlen(bfr);
    int inc = my_strlen(last);
    char *new = malloc(sizeof(char) * (len + inc + 2));

    if (new == NULL || bfr == NULL || last == NULL)
        return (NULL);
    if (my_strcpy(new, bfr, 0) == NULL)
        return (NULL);
    new[len] = add;
    if (my_strcpy(new, last, len + 1) == NULL)
        return (NULL);
    new[len + inc + 1] = '\0';
    return (new);
}