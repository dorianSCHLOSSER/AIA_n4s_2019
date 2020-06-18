/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** direction
*/

#include "struct.h"

int calc_direction(float cal, char *str)
{
    char *buffer = NULL;
    size_t size_buf = 1000;

    my_putstr("wheels_dir:");
    if (cal < 0.0) my_putstr("-");
    my_putstr(str);
    getline(&buffer, &size_buf, stdin);
}

int direction(char **tab, float index)
{
    float right = 0;
    float left = 0;

    right = atof(tab[31]);
    left = atof(tab[1]);

    if (index >= 1500) calc_direction(left - right, "0.005\n");
    else if (index >= 1000) calc_direction(left - right, "0.05\n");
    else if (index >= 500) calc_direction(left - right, "0.1\n");
    else if (index >= 200) calc_direction(left - right, "0.3\n");
    else calc_direction(left - right, "0.5\n");
}