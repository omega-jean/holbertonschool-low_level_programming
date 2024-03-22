#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
#include <stdarg.h>


typedef struct {
char pr;
void (*print)(va_list args);
} pr_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
