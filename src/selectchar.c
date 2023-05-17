/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:38 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: selectchar
 */
#include "stu.h"
char *selectchar(char *buf, char **param)
{
    int i;
    int k;
    int j;
    int size;
    int trouve;

    i = 0;
    j = goodparam(param);

    while (buf[i] != '\0') {
        k = 0;
        trouve = 0;
        size = stu_strlen(param[j]);
        while (size >= 0 && param[j][k] != '\\') {
            if (buf[i] == param[j][k]) {
                trouve = 1;
            }
            k = k + 1;
            size = size - 1;
        }
        if (trouve == 0) {
            buf[i] = *"";
        }
        i = i + 1;
    }
    return (buf);
}
