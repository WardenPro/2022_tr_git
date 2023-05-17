/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:39 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: trchar
 */

char *trchar(char *buf, char **param)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (buf[i] != '\0'){
        while (buf[i] != param[1][j] && param[1][j] != '\0'){
            j = j + 1;
        }
        if (buf[i] == param[1][j] && param[1][j] != '\0') {
            buf[i] = param[2][j];
            i = i + 1;
            j = 0;
        } else if (param[1][j] == '\0') {
            i = i + 1;
            j = 0;
        }
    }
    return &*buf;
}
