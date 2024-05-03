/*
    Desenvolvido por: Pedro de Oliveira Trento
    Email: pedrotrento8@gmail.com

    Escreva um programa em C que leia o modelo, o ano de fabricação e a placa (string no formato 
    Mercosul, ou seja LLLDLDD, onde L é uma letra e D um dígito) de uma lista de veículos de uma
    concessionária (no máximo MAXCARROS, dado através de um #define). Não se sabe de antemão
    o número de leituras, o programa deve encerrar a parte de leitura quando o usuário digitar um valor negativo
    no campo ano. Pede-se: 
        a) Listar os modelos, anos e placas dos carros, conforme exemplo de execução abaixo. 
        b) Listar os modelos e ano de fabricação dos carros cuja placa tem nal 7.
*/  


#include <stdio.h>

#define MAX_CARROS 10
#define TAM_MODELO 40
#define TAM_PLACA 50

int main(){

    char modelo[MAX_CARROS][TAM_MODELO];
    int anoFrabrica[MAX_CARROS];
    char placa[MAX_CARROS][TAM_PLACA];

    int seguir = 1, num_carros = 0;

    while(seguir){
        printf("Entre o modelo, ano de fabricação e placa do veiculo %d:", num_carros+1);
        fgets(modelo[num_carros], TAM_MODELO, stdin);

        scanf("%d", &anoFrabrica[num_carros]);
        if(anoFrabrica[num_carros] < 0 ){
            seguir = 0;
        }
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        fgets(placa[num_carros], TAM_PLACA, stdin);
        num_carros++;   
    }

    printf("Impressao dos veiculos lidos:\n");
    for(int i = 0; i < num_carros ; i++){
        printf("%s, %d, %s \n", modelo[i], anoFrabrica[i], placa[i]);
    }

    return 0;
}