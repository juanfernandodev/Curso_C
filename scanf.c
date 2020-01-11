#include <stdio.h>

int main(){
    int number;
    printf("Ingrese un numero: ");
    scanf("%d", &number); //Lee el numero y lo ingresa en la direccion de memoeria
                            //de la variable number
    printf("\nUsted ingreso: %d", number);

}