#include <stdio.h>

int main() {
    int c;
    int space;
    int tab;
    int lineBreak;
    
    space = 0;
    tab = 0;
    lineBreak = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++space;
        }
        if (c == '\t') {
            ++tab;
        }
        if (c == '\n') {
            ++lineBreak;
        }
    }
    printf("space: %d\n", space);
    printf("tab: %d\n", tab);
    printf("lineBreak: %d\n", lineBreak);
}