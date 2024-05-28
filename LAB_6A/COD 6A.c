2.
#include <stdio.h>

int main() {
    printf("/%f/\n", 6143.21);
    printf("/%e/\n", 6143.21);

    printf("/%4.2f/\n", 6143.21);
    printf("/%3.1f/\n", 6143.21);
    printf("/%10.3f/\n", 6143.21);

    printf("/%10.3e/\n", 6143.21);

    return 0;
}


Результат:
/6143.210000/
/6.143210e+03/
/6143.21/
/6143.2/
/ 6143.210/
/ 6.143e+03/


3.
#include <stdio.h>

int main() {
    int integerNum = 10;
    float floatNum = 3.14;
    char charVar = 'A';
    long longNum = 1234567890;

    printf("Ціле число (int): %d\n", integerNum);
    printf("Дійсне число (float): %f\n", floatNum);
    printf("Символ (char): %c\n", charVar);
    printf("Довге ціле число (long): %ld\n", longNum);

    printf("Ціле число з шириною поля 10: %10d\n", integerNum);
    printf("Дійсне число з шириною поля 10: %10f\n", floatNum);
    printf("Символ з шириною поля 10: %10c\n", charVar);
    printf("Довге ціле число з шириною поля 10: %10ld\n", longNum);
    printf("Дійсне число з точністю 2: %.2f\n", floatNum);
    printf("Дійсне число з точністю 0: %.0f\n", floatNum);

    return 0;
}

Результат: 
Довге ціле число (long): 1234567890
Ціле число з шириною поля 10:     10
Дійсне число з шириною поля 10:    3.140000
Символ з шириною поля 10:       А
Довге ціле число з шириною поля 10: 1234567890
Дійсне число з точністю 2: 3.14
Дійсне число з точністю 0:3


4.
#include <stdio.h>

int main() {
    int i;
    char symbol;

    printf("Symbol\tDecimal\tOctal\tHex\n");
    for (i = 33; i < 43; i++) {
        symbol = i;
        printf("%c\t%d\t%o\t%x\n", symbol, symbol, symbol, symbol);
    }

    return 0;
}


Результат:
Symbol  Decimal Octal   Hex
!       33      41      21
"       34      42      22
#       35      43      23
$       36      44      24
%       37      45      25
&       38      46      26
'       39      47      27
(       40      50      28
)       41      51      29
*       42      52      2a


5.
#include <stdio.h>

int main() {
    float price, total_cost;
    int quantity;

    printf("Введіть ціну товару: ");
    scanf("%f", &price);

    printf("Введіть кількість одиниць товару: ");
    scanf("%d", &quantity);

    total_cost = price * quantity;

    printf("Вартість купівлі: %.2f\n", total_cost);

    return 0;
}


Результат:
Введіть ціну товару: 2
Введіть кількість одиниць товару: 35
Вартість купівлі: 70.00


6.
#include <stdio.h>
#include <math.h>

int main() {
    float radius, circumference, area;
    const float pi = 3.141592;

    printf("Введіть радіус круга: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    area = pi * pow(radius, 2);

    printf("Довжина кола: %.2f\n", circumference);
    printf("Площа круга: %.2f\n", area);

    return 0;
}


Результат:
Введіть радіус круга: 5
Довжина кола: 31.42
Площа круга: 78.54



7.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imaginaryPart;

    printf("Введіть коефіцієнти a, b і c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корені рівняння: %.2f та %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Рівняння має один корінь: %.2f\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Корені рівняння: %.2f + %.2fi та %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}


Результат:
Введіть коефіцієнти а, bic: 1 3 5
Корені рівняння: 1.50 +1.661 та 1.50 1.661


8.
#include <stdio.h>

int main() {
    int ch;

    printf("Введіть символи (для завершення введіть символ '#'):\n");

    while (1) {
        ch = getchar();
        if (ch == '#') {
            break;
        }
        putchar(ch);
    }

    printf("\nПрограму завершено через введення символу '#'.\n");

    return 0;
}

Результат:
Введіть символи (для завершення введіть символ '#'):
Привіт, світ!
Привіт, світ!
Програму завершено через введення символу '#'.


9.
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int k;
    printf("Введіть значення k: ");
    scanf("%d", &k);

    double Ax = 1, Ay = 1;
    double Bx = 2 * k, By = 2;
    double Cx = -2 * k, Cy = k + 2;

    double a = distance(Bx, By, Cx, Cy); // BC
    double b = distance(Ax, Ay, Cx, Cy); // AC
    double c = distance(Ax, Ay, Bx, By); // AB

    double p = (a + b + c) / 2; // півпериметр
    double S = sqrt(p * (p - a) * (p - b) * (p - c)); // площа за формулою Герона
    double r = S / p; // радіус вписаного кола

    printf("Периметр трикутника: %lf\n", a + b + c);
    printf("Площа трикутника: %lf\n", S);
    printf("Радіус вписаного кола: %lf\n", r);

    return 0;
}


Результат:
Введіть значення k: 32
Периметр трикутника: 292.532411
Площа трикутника: 3054.500000
Радіус вписаного кола: 20.883156



10.
#include <stdio.h>

int main() {
    double a = 1000.0;
    double b = 0.0001;

    double a_minus_b = a - b;
    double numerator = a_minus_b * a_minus_b * a_minus_b - (a * a * a);

    double b_cubed = b * b * b;
    double term1 = 3 * a * b * b;
    double term2 = 3 * a * a * b;
    double denominator = b_cubed - term1 - term2;

    double result = numerator / denominator;

    printf("Результат: %.10lf\n", result);

    return 0;
}


Результат:
0.9999999799
















