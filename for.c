#include <stdio.h>
int main(){
    int i, acum = 0;

    for (i = 0; i < 10; i++){
        acum += i;
    }

    printf("%d", acum);

    return 0;
}