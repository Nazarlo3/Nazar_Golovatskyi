1.
#include <stdio.h>
int main()
{
    int a = 67;
    int b = 33;
    int c = a + b + 7;
    printf("a + b + 7 = %d \n", c);
    return 0;
}

Результат:
a + b + 7 = 107 


2.
#include <stdio.h>
int main()
{
    int a = 8;
    int b = 7;
    int c = a + 5 * b;
    printf("c = %d \n", c);
    return 0;
}

Результат:
c = 43


3.
#include <stdio.h>
#include <string.h>

#define praise "О, яке чудове ім'я!"

int main() {
    char name[50];
    printf("Як вас звати?\n");
    scanf("%s", name);
    printf("Привіт, %s\n", name);
    printf("Ваше ім'я складається з %lu літер і займає %lu компонент пам'яті.\n", strlen(name), sizeof(name));
    printf("%s\n", praise);
    return 0;
}

Результат:
Nazar
Привіт, Nazar
Ваше ім'я складається з 5 літер і займає 50 компонент пам'яті.
О, яке чудове ім'я!


4.
#include <stdio.h>
#include <conio.h>

void main() {
    float x = 1.4, y = 2.0;
    int z;

    z = x * 2 * 7 + (int)(y / 4) - 1; // Make sure to cast y/4 to an int to match the type of z
    printf("z = %d\n", --z);
    getch();
}


Результат:
z = 17


4.1
#include <stdio.h>
#include <conio.h>

void main() {
    int x = 2, z;
    float y;
    
    y = 2.3 * x; 
    z = 0.5 * y + (x++) / (3 * y); 
    
    printf("z = %d\n", z);
    getch();
}

Результат:
z = 2


4.2
#include <stdio.h>
#include <conio.h>

void main() {
    int x, y = 3;
    float z;
    
    x = ++y / 2.0; 
    z = 1.1 * x + 0.3 * x; 
    
    printf("z = %4.1f\n", z);
    getch();
}

Результат:
z =  2.8























