/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:40 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: has option
 */

#include "stu.h"

int has_opt(int nb, char **param, const char opt)
{
    int i;
    int j;
    int size;

    i = 0;

    while (nb > 0) {
        if (param[i][0] == '-') {
            size = stu_strlen(param[i]);
            j = 0;
            while (size >= 1) {
                if (param[i][j] == opt) {
                    return (1);
                }
                size = size - 1;
                j = j + 1;
            }
        }
        nb = nb - 1;
        i = i + 1;
    }
    return (0);
}
