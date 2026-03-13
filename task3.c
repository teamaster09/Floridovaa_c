#include <stdio.h>

int main(void)
{
    // Объявляем переменные и сразу присваиваем им значения
    int a = 10;
    float b = 3.14;     
    char c = 'A';        // я хочу спать
    
    // Выводим значения и адреса
    printf("a = %d, address = %p\n", a, &a);
    printf("b = %.2f, address = %p\n", b, &b);
    printf("c = %c, address = %p\n", c, &c);
    
    return 0;
}