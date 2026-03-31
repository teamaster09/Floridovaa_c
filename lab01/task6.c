#include <stdio.h>

int main(void)
{
    float a = 5.0;  // Сразу дробные
    float b = 2.0;
    
    float result = a / b;
    
    printf("Результат: %.1f\n", result);  // Выведет: 2.5
    
    return 0;
}
