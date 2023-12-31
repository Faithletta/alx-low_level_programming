#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * main function that prints anything.
 */ 

void print_all(const char * const format, ...) 
{
    va_list args;
    char *separator = "";
    int i = 0;

    va_start(args, format);

    while (format && format[i]) 
    {

        if (format[i] == 'c') 
	{
		      printf("%s%c", separator, va_arg(args, int));
        }
       
	else if (format[i] == 'i') 
	{
            printf("%s%d", separator, va_arg(args, int));
        }
       
	else if (format[i] == 'f') 
	{
            printf("%s%f", separator, va_arg(args, double));
        }
       
	else if (format[i] == 's') 
	{
            char *str = va_arg(args, char *);
            if (str == NULL) 
	    {
                printf("%s(nil)", separator);
            }
	   
	    else 
	    {
                printf("%s%s", separator, str);
            }
        }
        separator = ", ";
        i++;
    }

    va_end(args);

    printf("\n");
}
