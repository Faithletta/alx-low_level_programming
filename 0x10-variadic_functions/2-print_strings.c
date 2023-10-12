#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_String - Prints strings, followed by a new line.
 * @seprator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of a string to be printed.
 * Description: If seprators is NULL. (nill) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
    unsigned int i;
    char *str;

    va_start(strings, n);

    for (i = 0; i < n; i++) {
        str = va_arg(strings, char*);
        printf("%s", str);

        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }

    va_end(strings);

    printf("\n");
}
