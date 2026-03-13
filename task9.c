#include <stdio.h>

int main(void)
{
    // Задание 9: Вычисление формул
    printf("Задание 9: Вычисление формул\n");
    
    int x;
    
    // Считываем число x
    printf("Введите число x: ");
    scanf("%d", &x);
    
    // Вычисляем x² через умножение 
    int x2 = x * x;  // это x²
    
    // Первое выражение: x² + 2x + 1
    int result1 = x2 + 2 * x + 1;
    
    // Второе выражение: (x + 1)² - (x - 1)²
    // Сначала вычисляем (x+1) и (x-1), потом их квадраты
    int x_plus_1 = x + 1;
    int x_minus_1 = x - 1;
    int x_plus_1_square = x_plus_1 * x_plus_1;    // (x+1) в квадрате
    int x_minus_1_square = x_minus_1 * x_minus_1;  // (x-1) в квадрате
    
    int result2 = x_plus_1_square - x_minus_1_square;
    
    // Выводим результаты
    printf("x * x + 2 * x + 1 = %d\n", result1);
    printf("(x+1)*(x+1) - (x-1)*(x-1) = %d\n", result2);
    
    return 0;
}