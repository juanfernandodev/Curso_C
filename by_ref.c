#include <stdio.h>

void duplicar(int *a){ //Recibe la direccion de memoria, pero accede al contenido
    *a *= 2; //Multiplica el contenido por 2
}

int main(){
    int a = 5;
    printf("Antes de duplicar a : %d\n", a);
    printf("&a: %p\n", &a);
    printf("*a: %p\n", a); //La P muestra el entero en formato byte
    
    duplicar(a); //Le paso la direccion de a en memoria
    printf("Despues de duplicar a: %d\n", a);

    return 0;
}