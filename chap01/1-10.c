#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\b':
                putchar('\\');
                putchar('b');                
                break;
            case '\t':
                putchar('\\');
                putchar('t');                
                break;
            default:
                putchar(c);
                break;
        }
    }
}