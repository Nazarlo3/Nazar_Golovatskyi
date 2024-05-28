2. 

1
#include <stdio.h>
int main(void)
{
 struct {
 int a;
 int b;
 } x, y;
 x.a = 10;
 y = x; /* присвоювання одної структури другій */
 printf("%d", y.a);
 return 0;
}

Результат:
10






2
#include <stdio.h>
/* визначення структури*/
struct student
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
 /* оголошення змінної stud1 типу struct student*/
 struct student stud1;
 printf("Vvedit imya:");
 gets(stud1.name);
 printf("Vvedit vik:");
 scanf("%d", &stud1.age);
 printf("Vvedit kyrs:");
 scanf("%d", &stud1.kurs);
 printf("Student %s\n", stud1.name);
 printf("Kyrs %d\n", stud1.kurs);
 printf("Vik %d\n", stud1.age);
}



Результат:
Vvedit imya:nazar
Vvedit vik:17 
Vvedit kyrs:34
Student nazar
Kyrs 34
Vik 17


#include <stdio.h>
/* визначення структури*/
struct student
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
 /* оголошення масиву на 10 структур */
 struct student stud[10];
 int i, n;
 printf("Kilkict studentiv:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 printf("Vvedit imya:");
 scanf("%s", stud[i].name);
 printf("Vvedit vik:");
 scanf("%d", &stud[i].age);
 printf("Vvedit kurs:");
 scanf("%d", &stud[i].kurs);
 }
 /* Виведення */
 for(i=0;i<n;i++)
 {
 printf("Student %s\n", stud[i].name);
 printf("Kurs %d\n", stud[i].kurs);
 printf("Vik %d\n", stud[i].age);
 }
}











Результат:
Kilkict studentiv:2
Vvedit imya:Nazar
Vvedit vik:17
Vvedit kurs:23
Vvedit imya:Vasyl
Vvedit vik:20
Vvedit kurs:23
Student Nazar
Kurs 23
Vik 17
Student Vasyl
Kurs 23
Vik 20












3.
#include <stdio.h>

// Оголошення структури для зберігання інформації про працівника
struct Employee {
    char name[50];
    float weight;
    float height;
    int age;
};

int main() {

    struct Employee emp;


    printf("Введіть ім'я працівника: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Введіть вагу працівника (в кг): ");
    scanf("%f", &emp.weight);

    printf("Введіть висоту працівника (в см): ");
    scanf("%f", &emp.height);

    printf("Введіть вік працівника: ");
    scanf("%d", &emp.age);


    printf("\nІнформація про працівника %s", emp.name);
    printf("----------------------------------------\n");
    printf("Вага: %.2f кг\n", emp.weight);
    printf("Висота: %.2f см\n", emp.height);
    printf("Вік: %d років\n", emp.age);

    return 0;
}

Результат:
Введіть вагу працівника (в кг): 60
Введіть висоту працівника (в см): 1.80    
Введіть вік працівника: 17

Інформація про працівника nazar
----------------------------------------
Вага: 60.00 кг
Висота: 1.80 см
Вік: 17 років
