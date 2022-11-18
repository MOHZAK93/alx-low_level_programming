#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
  *struct print_all - prints anything
  *@all: list
  *@func: pointer to the functions that prints all
  */
typedef struct print_all
{
	char all;
	void (*func)(va_list list);
} simbol;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
