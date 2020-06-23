/*
** EPITECH PROJECT, 2019
** Main fonction Project
** File description:
** main.c
*/

#include "my.h"

int main(void)
{
    ai_t *ai = create_my_ai_struct();

    if (ai == NULL)
        return (84);
    if (ai_car_simulation(ai) == 84)
        return (84);
    return (0);
}