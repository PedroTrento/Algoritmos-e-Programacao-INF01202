#include <stdio.h>

int main(){

    int Segundos_Usuario;
    float Horas, Minutos, Segundos;

    printf("Digite a quantidade de segundos:");
    scanf("%d", &Segundos_Usuario);

    Horas = Segundos_Usuario / 3600;

    Minutos = (Segundos_Usuario % 3600)/60;

    Segundos = (Segundos_Usuario % 3600)%60;

    printf("%d corresponde a %.0f:%.0f:%.0f", Segundos_Usuario, Horas, Minutos, Segundos);


    return 0;
}

