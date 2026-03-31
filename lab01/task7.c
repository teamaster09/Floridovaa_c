#include <stdio.h>

int main(void)
{
    printf("Задание 7: Потеря точности\n");
    printf("================================\n");
    
    float a = 0.1;      
    float b = 0.2;
    
    float result = a + b;
    
    printf("Тип float (4 байта):\n");
    printf("a = %.20f\n", a);
    printf("b = %.20f\n", b);
    printf("a + b = %.20f\n\n", result);
      
    return 0;
}
