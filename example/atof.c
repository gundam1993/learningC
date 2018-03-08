#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

/* atof 函数： 把字符串转换为相应的双精度浮点数 */
double atof(char s[]) {
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++) /* 跳过空白符 */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++) 
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    return sign * val / power
}

void main() {
    char a[] = '+1.123';
    char b[ = '-12312.35390'];
    double c;
    double d;
    c = atof(a);
    d = atof(d);
    printf('%d\n', c)
    printf('%d\n', d)    
}