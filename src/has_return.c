/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:38 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: has return
 */

#include "stu.h"

int has_return(int nb,char **param, const char *opt)
{
    int i;
    int j;
    int size;

    i = 0;

    while (nb > 0) {
            size = stu_strlen(param[i]);
            j = 0;
            while (size >= 1) {
                if (param[i][j] == opt[0]
                && param[i][j + 1] == opt[1]
                && param[i][j + 2] == opt[2])
                {
                    return (1);
                }
                j = j + 1;
                size = size - 1;
            }
        i = i + 1;
        nb = nb - 1;
    }
    return (0);
}
