/*
    Escreva um programa em C que leia do teclado uma string str, cujo tamanho máximo
é TAMSTRING, dado através de um #define. Após calcule e imprima na tela a quantidade de
caracteres alfanuméricos∗
contidos na string.
Obs: Nesse exercício, não é permitido usar a função strlen
*/

#define TAMSTRING 50

#include <locale.h>
#include <stdio.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    char str[TAMSTRING];
    int i = 0, qnt_alf = 0;
    printf("Entre a string:");
    fgets(str, TAMSTRING, stdin);
    while(str[i] != '\0'){
        if((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
            qnt_alf++;
        }
        i++;
    }

    printf("Numero de letras em minusculo na string: %d \n", qnt_alf);
}
