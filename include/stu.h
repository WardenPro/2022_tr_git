/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:42 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

char *alloc(void);
char *trchar(char *buf, char **param);
int has_opt(int nb, char **param, const char opt);
unsigned int stu_strlen(const char *str);
int has_return(int nb,char **param, const char *opt);
char delchar(char *buf, char **param);
char *selectchar(char *buf, char **param);
int goodparam(char **param);

#endif // STU_H_
