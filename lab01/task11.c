#include <stdio.h>

int main(void)
{
    // Задание 11: Последняя цифра числа
    printf("Задание 11: Последняя цифра числа\n");
    
    int number;
    
    // Считываем число
    printf("Введите целое число: ");
    scanf("%d", &number);
    
    // Получаем последнюю цифру с помощью оператора %
    int last_digit = number % 10;
    
    // Выводим результат
    printf("Последняя цифра числа %d: %d\n", number, last_digit);
    
    return 0;
}
