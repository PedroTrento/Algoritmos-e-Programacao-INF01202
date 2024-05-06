/*
    Desenvolvido por Pedro de Oliveira Trento
        Escreva um programa em C que leia os códigos identificadores (inteiros) e a precipitação de
    chuva no último mês de 3 municípios. A seguir, o programa deve:
    1. Calcular e informar na tela precipitação média nos três municípios
    2. Para cada município, escrever se a quantidade de chuva ficou abaixo ou acima do valor esperado
    de 105 mm
    3. Escrever o código dos municípios que tiveram precipitação muito alta (maior do que o dobro
    do valor esperado)
*/

#include <stdio.h>

// usar define tudo em maiusculo
#define VALOR_ESPERADO 105

int main(){

    //declaracao de variaveis (separou-se em duas linhas a declaracao de int para tornar mais orgainizado)
    int municipio1, municipio2, municipio3;
    int precipitacao1, precipitacao2, precipitacao3;
    float media_precipitacao;

    // pede ao usuario o codigo identificado
    printf("digite o codigo identificador dos municipios:");
    scanf("%d %d %d",&municipio1, &municipio2, &municipio3);

    // pede ao usuario as precipitacoes
    printf("digite digite a precipitacao de cada municipio:");
    scanf("%d %d %d",&precipitacao1, &precipitacao2, &precipitacao3);

    // faz a media das precipitacoes
    media_precipitacao = (float)(precipitacao1 + precipitacao2 + precipitacao3)/3;

    printf("precipitacao: %.2f mm\n", media_precipitacao);

    // compara a precipitacao 1 com o valor esperado
    if(precipitacao1 == VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal igual ao valor esperado\n", municipio1);
    }else if(precipitacao1 > VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal superior ao valor esperado\n", municipio1);
    }else{
        printf("O municipio de codigo %d teve precipitacao mensal inferior ao valor esperado\n", municipio1);
    }

    // compara a precipitacao 2 com o valor esperado
    if(precipitacao2 == VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal igual ao valor esperado\n", municipio2);
    }else if(precipitacao2 > VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal superior ao valor esperado\n", municipio2);
    }else{
        printf("O municipio de codigo %d teve precipitacao mensal inferior ao valor esperado\n", municipio2);
    }

    // compara a precipitacao 3 com o valor esperado
    if(precipitacao3 == VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal igual ao valor esperado\n", municipio3);
    }else if(precipitacao3 > VALOR_ESPERADO){
        printf("O municipio de codigo %d teve precipitacao mensal superior ao valor esperado\n", municipio3);
    }else{
        printf("O municipio de codigo %d teve precipitacao mensal inferior ao valor esperado\n", municipio3);
    }


    // compara as precipitacoes para ver se foi muito alta (dobro do esperado)
    if( precipitacao1 >= (2*VALOR_ESPERADO)){
        printf("O municipio de codigo %d teve precipitacao mensal muito alta", municipio3);
    }
    if( precipitacao2 >= (2*VALOR_ESPERADO)){
        printf("O municipio de codigo %d teve precipitacao mensal muito alta", municipio2);
    }
    if( precipitacao3 >= (2 * VALOR_ESPERADO)){
        printf("O municipio de codigo %d teve precipitacao mensal muito alta", municipio3);
    }



    return 0;
}



