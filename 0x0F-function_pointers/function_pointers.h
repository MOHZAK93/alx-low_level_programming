#ifndef FUNC_POINTERS_H
#define FUNC_POINTERS_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void print_name_uppercase(char *name);
int (*get_op_func(char *s))(int, int);
void print_name_as_is(char *name);
#endif
