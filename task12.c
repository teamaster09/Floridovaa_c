#include <stdio.h>

int main(void)
{
    // Задание 12: Разложение трехзначного числа
    printf("Задание 12: Разложение трехзначного числа\n");
    
    int number;
    
    // Считываем трехзначное число
    printf("Введите трехзначное число: ");
    scanf("%d", &number);
    
    // Выделяем сотни, десятки и единицы
    int hundreds = number / 100;       // сотни
    int tens = (number / 10) % 10;     // десятки
    int units = number % 10;            // единицы
    
    printf("Число %d:\n", number);
    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", units);
    
    return 0;
}