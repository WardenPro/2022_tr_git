/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:41 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: main
 */

#include <stdlib.h>
#include <unistd.h>
#include "stu.h"

int main(int nb, char **param)
{
    char *buf;

    buf = alloc();

    while (*buf != '\0') {
            if (has_opt(nb, param, 'd')
            && has_opt(nb, param, 'c') == 1) {
                selectchar(buf,param);
            } else if (has_opt(nb, param, 'd') == 1) {
                delchar(buf,param);
            } else {
                trchar(buf, param);
            }
            write(1, &*buf, 11);
            buf = alloc();
        }
    if (has_return(nb, param, "\\n") == 1) {
        write(1, "\n", 1);
        }
    free(buf);
    return (0);
}
