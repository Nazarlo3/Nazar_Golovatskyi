1.
#include <stdio.h>
int main(void) {
 float var1, var2;
 printf("Введіть перше число (var1): ");
 scanf("%f", &var1);
 printf("Введіть друге число (var2): ");
 scanf("%f", &var2);
 printf("var1 > var2 дає %d\n", var1 > var2);
 printf("var1 < var2 дає %d\n", var1 < var2);
 printf("var1 == var2 дає %d\n", var1 == var2);
 printf("var1 >= var2 дає %d\n", var1 >= var2);
 printf("var1 <= var2 дає %d\n", var1 <= var2);
 printf("var1 != var2 дає %d\n", var1 != var2);
 printf("!var1 дає %d\n", !var1);
 printf("!var2 дає %d\n", !var2);
 printf("var1 || var2 дає %d\n", var1 || var2);
 printf("var1 && var2 дає %d\n", var1 && var2);
 
 return 0;
}
Результат:
Введіть перше число (var1): 1
Введіть друге число (var2): 9
var1 > var2 дає 0
var1 < var2 дає 1
var1 == var2 да 0 �
var1 >= var2 дає 0
var1 <= var2 дає 1
var1 != var2 дає 1
!var1 дає 0
!var2 дає 0
var1 || var2 дає 1
var1 && var2 дає 