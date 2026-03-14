#include <stdio.h>

int main(void)
{
    // Задание 8: Переполнение
    printf("Задание 8: Переполнение\n");
    
    int x = 2147483647;  // максимальное значение для int
    
    printf("x = %d\n", x);
    printf("x + 1 = %d\n", x + 1);
    
    return 0;
}
