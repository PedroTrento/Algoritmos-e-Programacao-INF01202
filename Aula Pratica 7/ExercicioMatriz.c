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
#include <string.h>

#define MAX_CARROS 10
#define TAM_MODELO 40
#define TAM_PLACA 50

int main(){

    //declaração de matrizes e arranjos
    char modelo[MAX_CARROS][TAM_MODELO];
    int anoFrabrica[MAX_CARROS];
    char placa[MAX_CARROS][TAM_PLACA];

    //declaração de variáveis
    int seguir = 1, num_carros = 0;

    //loop para pegar as informações até digitarem um ano negativo
    while(seguir){
        printf("Entre o modelo, ano de fabricacao e placa do veiculo %d:\n", num_carros+1);
        fgets(modelo[num_carros], TAM_MODELO, stdin);
        //esse if serve para retirar o enter que o fgets pega ao digitar.
        //poderia ter usado o gets que não pega o enter, mas achei melhor continuar usando o fgets para me acosturmar a utilizar a melhor forma de captar uma string
        if(modelo[num_carros][strlen(modelo[num_carros]) - 1] == '\n'){
            modelo[num_carros][strlen(modelo[num_carros]) - 1] = '\0';
        }

        scanf("%d", &anoFrabrica[num_carros]);
        //getchar para consumir com o /n gerado pelo enter do scanf e não interferir com o fgets
        getchar();
        fgets(placa[num_carros], TAM_PLACA, stdin);

        //esse if serve para retirar o enter que o fgets pega ao digitar.
        //poderia ter usado o gets que não pega o enter, mas achei melhor continuar usando o fgets para me acosturmar a utilizar a melhor forma de captar uma string
        if(placa[num_carros][strlen(placa[num_carros]) - 1] == '\n'){
            placa[num_carros][strlen(placa[num_carros]) - 1] = '\0';
        }

        //se o ano for negativo sai do loop e tira decrementa 1 da variável da quantidade de carros escritos
        if(anoFrabrica[num_carros] < 0 ){
            seguir = 0;
            num_carros--;
        }
        num_carros++;
    }
    printf("Impressao dos veiculos lidos:\n");
    for(int i = 0; i < num_carros ; i++){
        printf("%s, ano %d, %s \n", modelo[i], anoFrabrica[i], placa[i]);
    }
    printf("Modelos e anos de fabricacao dos veiculos com placa de final 7:\n");
    for(int i = 0; i < num_carros ; i++){
        if(placa[i][strlen(placa[i])-1] == '7'){
            printf("%s, ano %d\n", modelo[i], anoFrabrica[i]);
        }
    }
    return 0;
}
