/*
    Desenvolvido por: Pedro de Oliveira Trento
        Escreva um programa em C que crie um arranjo com TAMMAX elementos reais, onde TAMMAX
    é dado por um #define. O programa deve ler um valor inteiro N, e preencher por leitura de
    teclado o arranjo (consistir se N é menor ou igual a TAMMAX). A seguir, o programa deve calcular
    e imprimir na tela:
    1. O maior (M) e o menor (m) valor informado (com 4 casas decimais)
    2. A média µ dos valores informados (com 4 casas decimais)
    3. A quantidade de valores xi do arranjo tais que |xi − µ| < 0.5(M − m)
*/


#include <stdio.h>
#include <math.h>
#define TAM_MAX 8

int main(){

    int n_elementos, n_perto_media, flag = 1;
    float vetor[TAM_MAX], menor_valor, maior_valor, soma, media;



    while(flag){
        printf("Entre o numero de elementos no arranjo (valor menor ou igual a %d):", TAM_MAX);
        scanf("%d", &n_elementos);
        if(n_elementos > TAM_MAX){
            printf("Digite um numero valido\n");
        }else{
            flag = 0;
        }
    }

    printf("Entre com %d valores reais:", n_elementos);
    for(int i = 0; i < n_elementos ; i++){
        scanf("%f", &vetor[i]);
    }


    //menor valor no vetor
    menor_valor = vetor[0];
    for(int i = 0; i < n_elementos ; i++){
        if(menor_valor > vetor [i]){
            menor_valor = vetor[i];
        }
    }

    //maior valor no vetor
    maior_valor = vetor[0];
    for(int i = 0; i < n_elementos ; i++){
        if(maior_valor < vetor [i]){
            maior_valor = vetor[i];
        }
    }

    //media
    for(int i = 0; i < n_elementos ; i++){
        soma = vetor[i] + soma;
    }
    media = soma/n_elementos;


    // valores perto da media
    for(int i = 0; i < n_elementos ; i++){
        if(fabs(vetor[i]-media) < (0.5 * (maior_valor - menor_valor))){
           n_perto_media++;
        }
    }

    printf("Menor valor: %f\n", menor_valor);
    printf("Maior valor: %f\n", maior_valor);
    printf("Media dos valores: %f\n", media);
    printf("Quantidade de valores perto da media: %d\n", n_perto_media);




    return 0;
}
