/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** stop_engine
*/

#include "struct.h"

int stop_car(char *str)
{
    int i = 0;
    char *result = "Track Cleared";
    char *temp = NULL;

    temp = strstr(str, result);

    if (temp) {
        engine("stop_simulation\n");
        return (1);
    }
    else return (0);
}