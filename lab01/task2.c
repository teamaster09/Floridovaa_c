#include <stdio.h>  // Эта библиотека нужна для printf

int main(void)
{
    printf("\nЗадание 2:\n");  // \n делает пустую строку между заданиями
    
    // Оператор sizeof() показывает, сколько байт занимает тип
    printf("char: %d байт\n", sizeof(char));
    printf("int: %d байт\n", sizeof(int));
    printf("float: %d байт\n", sizeof(float));
    printf("double: %d байт\n", sizeof(double));    // я умру в нищете
    
    return 0;
}
