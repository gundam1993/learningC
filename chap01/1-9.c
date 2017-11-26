#include <stdio.h>

int main() {
    char c;
    char d;
    c = getchar();
    while (c != EOF) {
        d = c;
        c = getchar();
        if (c != ' ' || d != ' ') {
            putchar(c);
        }
    }
}