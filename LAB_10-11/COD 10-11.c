1.
/* Магічне число */
#include <stdio.h>
#include <stdlib.h>
intmain()
{
intmagic; /* магічне число */
intguess; /* спроба гравця */
magic = rand() % 10 + 1; /* генерація магічного числа */
printf("Vgadaymagichnechuslo: ");
scanf("%d", &guess);
if(guess == magic) printf("** Virno **");
return 0;
}

Результат:
1)Vgadaymagichnechuslo: 4
** Virno **
2)Vgadaymagichnechuslo: 3


2.
/* Магічнечисло */
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int magic; /* магічнечисло */
 int guess; /* спробагравця */
magic = rand() % 10 + 1; /* генераціямагічного числа */
printf("Vgadaymagichnechuslo: ");
scanf("%d", &guess);
 if(guess == magic) printf("** Virno **");
 else { printf("** Ne virno **");}
 return 0; 
}

Результат:
1) Vgadaymagichnechuslo: 4
** Virno **
2)Vgadaymagichnechuslo: 8
** Nevirno **


3.
/* Магічнечисло 3*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int magic;
 int guess;
 magic = 100; //rand();
printf("Vgaday magichne chuslo: ");
scanf("%d", &guess);
 if (guess == magic) {
printf("** Virno **");
printf("Magichne chuslo rivne %d\n", magic);
 }
 else {
printf("** Nevirno, ");
 if(guess > magic) printf("zanabto veluke\n");
 /* вкладений if */
 else printf("zanabto male\n");
 }
 return 0;
}

Результат:
1)Vgadaymagichnechuslo: 1
** Nevirno, zanabtomale
2)Vgadaymagichnechuslo: 4
** Virno **Magichnechuslorivne 4
3)Vgadaymagichnechuslo: 5
** Nevirno, zanabtoveluke


4.
#include <stdio.h>
int main(void)
{
 int t;
 for(t=0; t<100; t++) {
 printf("%d ", t);
 if(t==10) break;
 }
 return 0;
}


Результат:
0 1 2 3 4 5 6 7 8 9 10


5.
#include <stdio.h>
int main(void) {
 char s[80], *str;
 int space = 0;
 printf("Vvedit riadok: ");
 fgets(s, sizeof(s), stdin); // використовую fgets() замість gets()
 str = s;
 while (*str != '\0') {
 if (*str == ' ')
 space++;
 str++;
 }
 printf("%d probiliv\n", space);
 return 0;
}


Результать:
1)
Vvedit riadok: 5
0 probiliv
2)
Vvedit riadok: 1 
6 probiliv




#include <stdio.h>
#include <conio.h>
int main() {
 int a = 2, b = 0, c = 1;
 if (a > 0 && b < -3) 
 c = b * b / a; 
 printf("c=%d\n", c); /* c=1 */
 a += c / a + a % c;
 b = c * a;
 if (a < b || a < 0) {
 c *= a; 
 printf("c=%d\n", c); /* c=2 */
 } else if (c++ == 2) {
 printf("e=%d\n", c);
 }
 if (b < a && a == 2)
 c = 2 * a + 1;
 else {
 c = (b--) + a; 
 a = 0; 
 }
 printf("c=%d\n", c); /* c=5 */
 a = b = 2;
 if (c >= 3) {
 if (a < 0 || a > c)
 c = 0;
 else {
 a = 1; 
 c = 7; 
 printf("e=%d\n", c); /* e=7 */
 }
 }
 if (a > 0 && c < 10) {
 if (a > 0)
 printf("c=%d\n", c++);
 } else 
 c = 10;
 if (c <= 5) {
 if ((a = b + 1) > 2) 
 c %= 2;
 }
 printf("c=%d\n", c); /* c=8 */
 a = 3; 
 b = -1;
 if (b > 0) 
 c = 1;
 else if (b < -10) 
 c = 0;
 else if (b <= -3) 
 c = b * b + 10;
 printf("c=%d\n", c); /* c=11 */
 return 0;
}

Результат:
c=4
e=7
c=7
c=8
c=8



#include <stdio.h>
int main() {
 float num1, num2;
 char operation;
 printf("Введіть перше число: ");
 scanf("%f", &num1);
 printf("Введіть друге число: ");
 scanf("%f", &num2);
 printf("Введіть операцію (+, -, *, /): ");
 scanf(" %c", &operation);
 if (operation == '+') {
 printf("Результат: %.2f\n", num1 + num2);
 } else if (operation == '-') {
 printf("Результат: %.2f\n", num1 - num2);
 } else if (operation == '*') {
 printf("Результат: %.2f\n", num1 * num2);
 } else if (operation == '/') {
 if (num2 != 0) {
 printf("Результат: %.2f\n", num1 / num2);
 } else {
 printf("Помилка: Ділення на нуль\n");
 }
 } else {
 printf("Помилка: Неправильна операція\n");
 }
 return 0;
}

Результат:
Введіть перше число: 1
Введіть друге число: 2
Введіть операцію (+, -, *, /): +
Результат: 3.00





