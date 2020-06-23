/*
** EPITECH PROJECT, 2019
** All prototypes
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

typedef struct ai_s
{
    char **board;
    char *buffer;
    size_t size;
    int end;
} ai_t;

ai_t *create_my_ai_struct(void);
void redirect_all_stdout(void);

void opt_char(va_list ap, int std);
void opt_str(va_list ap, int std);
void opt_dec(va_list ap, int std);
void my_option(char flag, va_list(ap), int std);
void my_printf(int std, char *str, ...);

void my_putchar(char c, int std);
void my_putstr(char *str, int std);
void my_put_nbr(int nb, int std);
int display_board(char **board, int std);

int my_atoi(char *str);
int my_strcmp(char *str1, char *str2);
int my_strlen(char *str);

char *my_strdup(char *copy);
char *my_strcat(char *bfr, char *last);
char *my_strcpy(char *new, char *src, int inc);
char *my_strcat_add(char *bfr, char *last, char add);

int my_char_is_alpha(char c);
int calc_arr_size(char *str);
int calc_str_len(char *str, int inc);
char *copy_str_to_array(char *str, int inc);
char **convert(char *str, int inc);

int find_str_cmp(char *str, char *find, int inc, int size);
int check_find_cmp(char *str, char *find, int inc, int size);
int find_str(char *str, char *find);

int wheels_directions(ai_t *ai);

int my_array_size(char **board);
char **cut_board(char **board, int size);

int backwards(ai_t *ai);
int go_left(ai_t *ai);
int go_right(ai_t *ai);
int go_ahead(ai_t *ai);

int len_board(char **board);
int avoid_crash(ai_t *ai, int max_value);

int ai_car_simulation(ai_t *ai);

int start_simuation(ai_t *ai);
int check_error_start(char s);
void stop_simulation(char *buffer, size_t size);

int check_check_point(ai_t *ai, char **cp, int cy);
int check_point_handling(ai_t *ai);
#endif /* MY_H_ */