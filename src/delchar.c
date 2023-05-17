/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:39 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: delchar
 */

char delchar(char *buf, char **param)
{
    int i;
    int z;

    z = 0;
    i = 0;

    while (buf[i] != '\0'){
        while (buf[i] != param[2][z]
                  && param[2][z] != '\0'){
                z = z + 1;
            } if (buf[i] == param[2][z]
               && param[2][z] != '\0') {
                buf[i] = *"";
                i = i + 1;
                z = 0;
            } else if (param[2][z] == '\0') {
                i = i + 1;
                z = 0;

            }
        }
    return *buf;
}
