/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:36 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: alloc
 */
#include <unistd.h>
#include <stdlib.h>
char *alloc(void)
{
    int i;
    int size_read;
    char *buf;
    
    i = 10;
    size_read = 0;

    buf = malloc(sizeof(char) * (i + 1));
    size_read = read(0, buf, i);
    buf[size_read] = '\0';
    return (buf);
}
