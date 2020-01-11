#include <stdio.h>

int main(){
    int number = 10;
    int * pointToNumber = &number; //El * indica que es un puntero

    printf("%p\n", &number);
    printf("%p, %d\n", pointToNumber, *pointToNumber);


}