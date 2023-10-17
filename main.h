#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _print_integer(int n);
int print_chara(char c);
int print_int(va_list args);
int print_dec(va_list args);

#endif /* MAIN_H */
