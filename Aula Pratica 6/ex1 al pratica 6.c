/*
    Desenvolvido por Pedro de Oliveira Trento
    Escreva um programa em C que leia do teclado uma string, cujo tamanho máximo é TAMSTRING,
dado através de um #define. Após calcule e imprima na tela a quantidade de letras minúsculas
contidas na string. Após, altere a string lida trocando cada uma dessas letras por sua sucessora
no alfabeto (ou seja, a→b, b→c,...,z→a). Após, imprima a string modificada na tela.
*/

#define TAMSTRING 50

#include <stdio.h>

int main(){

    char str[TAMSTRING];
    int i = 0, qnt_min = 0;
    printf("Digite a string:");
    fgets(str, TAMSTRING, stdin);
    while(str[i] != '\0'){
        if(str[i] >= 97 && str[i] <= 122){
            qnt_min++;
            str[i]++;
            if(str[i] >= 123){
                str[i] = 97;
            }
        }
        i++;
    }

    printf("Numero de letras em minusculo na string: %d \n", qnt_min);
    printf("String modificada: %s", str);
}
