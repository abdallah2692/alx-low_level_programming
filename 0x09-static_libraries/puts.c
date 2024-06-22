#include <stdio.h>

void _puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
    putchar('\n');
}
