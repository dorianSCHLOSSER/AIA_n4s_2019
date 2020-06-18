/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# include <stdbool.h>

int stop_car();
int engine(char *str);
char **my_str_to_word_array(char const *str, char c);
int speed(float index);
char *check_buffer(char *buffer);
int calc_direction(float cal, char *str);
int direction(char **tab, float index);
int speed(float index);
int my_putstr(char const *str);

#endif /* !STRUCT_H_ */
