/*
** EPITECH PROJECT, 2020
** mini_shell
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/shell.h"

char *parsing_left(char *cmd, int total)
{
    char *result = malloc(sizeof(char) * (total + 1));

    if (total == 0)
        return (NULL);
    result[total] = '\0';
    for (int i = 0; i < total; i++) {
        result[i] = cmd[i];
    }
    return (result);
}

char *parsing_right(char *cmd, int start, int total)
{
    int all = total - start;
    char *result = malloc(sizeof(char) * (all + 1));

    if (all == 0)
        return (NULL);
    result[all] = '\0';
    for (int i = start, j = 0; i < total; i++, j++) {
        result[j] = cmd[i];
    }
    return (result);
}