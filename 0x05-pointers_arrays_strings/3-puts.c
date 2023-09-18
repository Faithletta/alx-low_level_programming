#include <stdio.h>

void _puts(char *str) {
    if (str != NULL) {
        while (*str != '\0') {
            putchar(*str);
            str++;
        }
    }
    putchar('\n');
}

int main() {
    char myString[] = "Hello, world!";
    _puts(myString); // Call the _puts function
    return 0;
}
