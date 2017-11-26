#include <stdio.h>

int main() {
    // 打印EOF
    printf("EOF is %d\n", EOF);
    // 验证getchar() != EOF 的值是0还是1
    int c;
    while(c = (getchar() != EOF)) {
        printf("%d\n", c);
    }
    printf("%d - at EOF\n", c);
}