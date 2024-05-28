#include <stdio.h>

int main() {
    int a = 017;  // Вісімкове число 017
    int b = 036;  // Вісімкове число 036
    printf("a = %o, b = %o\n", a, b);
    printf("a & b = %o\n", a & b);
    printf("a | b = %o\n", a | b);
    printf("a << 2 = %o\n", a << 2);
    printf("a >> 2 = %o\n", a >> 2);
    return 0;
}

Результат:
a = 17, b = 36
a & b = 16
a | b = 37
a << 2 = 74
a >> 2 = 3
