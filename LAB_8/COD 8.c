1)
#include <stdio.h>
#include <math.h>
int main (void)
{
 printf("Аргумент: -612367.54783 \n");
 printf("fabs : %.5f \n", fabs(-612367.54783) );
 return 0;
}
Результат:
Аргумент: -612367.54783 
fabs : 612367.54783
2)
#include <stdio.h>
#include <math.h>
int main ()
{
 printf("Аргумент: 1.23\n");
 printf("cosl : %.20Lf \n", cosl(1.23) );
 printf("cos : %.20f \n", cos(1.23) );
 return 0;
}
Результат:
Аргумент: 1.23
cosl : 0.33423772712450261499 
cos : 0.33423772712450261491
3)
#include <stdio.h>
#include <math.h>
int main ()
{
 printf("Аргументи: 2.6 і 3.45\n");
 printf("pow : %.20f\n", pow(2.6, 3.45));
 printf("powl : %.20Lf\n", powl(2.6, 3.45));
 return 0;
}
Результат:
Аргументи: 2.6 і 3.45
pow : 27.01830192235679106716
powl : 27.01830192235679218432
4)
#include <math.h>
#include <stdio.h>
int main() {
 double a, b, c;
 double D;
 double x1, x2;
 a = 1;
 b = -3;
 c = -4;
 D = b*b - 4*a*c;
 x1 = (-b + sqrt(D)) / (2*a);
 x2 = (-b - sqrt(D)) / (2*a);
 printf("Roots: %lf, %lf\n", x1, x2);
 return 0;
}
Результат:
Roots: 4.000000, -1.000000


3.
#include <stdio.h>
#include <math.h>
int main() {
 double x, z;
 double result;
 printf("Введіть значення x: ");
 scanf("%lf", &x);
 printf("Введіть значення z: ");
 scanf("%lf", &z);
 result = (z + x) / cos(x) + sqrt(pow(sin(x)*cos(x), 2)) + 16*pow(z, 2);
 printf("Результат обчислення виразу: %.2lf\n", result);
 return 0;
}
Результат:
Введіть значення x: 8
Введіть значення z: 6
Результат обчислення виразу: 479.92