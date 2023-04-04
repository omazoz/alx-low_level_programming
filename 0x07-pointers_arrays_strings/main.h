#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *s2);
char *_strpbrk(char *s1, char *s2);
char *_strstr(char *str1, char *str2);
int _putchar(char);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *t);

#endif
