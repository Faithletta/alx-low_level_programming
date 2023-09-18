#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
    if (str != NULL) {
        while (*str != '\0') {
            putchar(*str);
            str++;
        }

    putchar('\n');
}
