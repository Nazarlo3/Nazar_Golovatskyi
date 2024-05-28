#include <stdio.h>
int main() {
    int array[5]; 
    int *ptr = array; 
    int sum = 0;

    printf("Введіть п'ять цілих чисел:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i); 
    }

    
    for (int i = 0; i < 5; i++) 
        sum += *(ptr + i); 
    printf("Сума елементів масиву: %d\n", sum);
    return 0;
}
