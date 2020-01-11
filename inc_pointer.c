#include <stdio.h>

int main(){
    int n = 5;
    int * pi = &n;
    char c = 'A';
    char * pc = &c;

    printf("Antes Pi: %p\n", pi);
    printf("Antes pc: %p\n", pc);

    pi++;
    pc++;

    printf("Despues Pi: %p\n", pi);
    printf("Despues pc: %p\n", pc);

    return 0;
}