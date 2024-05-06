#include <stdio.h>
#include <stdlib.h>


int main(){

    /*
    int val1, val2;
    int sub;

    val1 = 3;
    val2 = 2;

    sub = val1 - val2;

    printf("A subtração foi de %d", sub);
    return 0;
    */



    float val1, val2;
    float sub;

    printf("Digite o primeiro float:");
    scanf("%f", &val1);
    printf("Digite o segundo float:");
    scanf("%f", &val2);

    sub = val1 - val2;

    printf("A subtração de %.2f com %.2f foi de %.2f", val1, val2, sub);

    return 0;
}
