/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:37 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: goodparam
 */

int goodparam(char **param)
{
    int j;

    j = 1;
    
    while (param[j][0] == '-') {
            j = j + 1;
        }
    return j;
}
