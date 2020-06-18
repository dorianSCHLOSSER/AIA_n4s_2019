/*
** EPITECH PROJECT, 2020
** src
** File description:
** main
*/

#include "struct.h"

char *check_buffer(char *buffer)
{
    char *str = malloc(sizeof(char *) * 100);
    int ind = 0;
    int nbr = 0;
    int i = 0;

    for (; nbr != 3 && buffer[i] ; i++)
        if (buffer[i] == ':') nbr += 1;
    if (nbr != 3) return (NULL);

    for (; buffer[i] != '\0' ; i++) {
        if ((buffer[i] >= '0' && buffer[i] <= '9') || buffer[i] == '.' \
            || buffer[i] == ':') {
                str[ind] = buffer[i];
                ind += 1;
        }
    }
    str[ind - 1] = '\0';
    return (str);
}

int speed(float index)
{
    if (index >= 2000) engine ("car_forward:1.0\n");
    else if (index >= 1000) engine ("car_forward:0.6\n");
    else if (index >= 500) engine ("car_forward:0.3\n");
    else engine("car_forward:0.1\n");
}

int move(void)
{
    char **tab;
    char *buffer = NULL;
    size_t size_buf = 1000;
    float index = 0;
    int i = 0;

    while (42) {
        my_putstr("get_info_lidar\n");
        getline(&buffer, &size_buf, stdin);
        if (stop_car(buffer) == 1) return (1);
        buffer = check_buffer(buffer);
        if (buffer == NULL) exit (84);
        tab = my_str_to_word_array(buffer, ':');
        index = atof(tab[15]);
        speed(index);
        direction(tab, index);
    }
}

int engine(char *str)
{
    size_t bufsize = 1000;
    char *buffer = NULL;

    my_putstr(str);
    getline(&buffer, &bufsize, stdin);
    if (stop_car(buffer) == 1) return (1);
}

int main(void)
{
    engine("start_simulation\n");
    move();
    return (0);
}