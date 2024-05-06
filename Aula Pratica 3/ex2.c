/*
    Desenvolvido por Pedro de Oliveira Trento
        Escreva um programa que fornece o saldo atualizado de uma conta bancária, após a realização
    de 3 operações bancárias (depósito ou retirada). O programa receberá, como dados, o saldo inicial
    da conta e o valor das 3 operações a serem realizadas (depósitos informados como valores positivos,
    e retirada como negativos). As operações são processadas na ordem em que foram solicitadas, e
    o saldo após a realização de cada operação deve ser atualizado e informado. Se após alguma
    operação o saldo for negativo, o programa deve informar a situação ao usuário, cobrar uma taxa
    de 10 reais, e seguir para a próxima operação (use duas casas decimais para informar os saldos).
*/

#include <stdio.h>

int main(){

    // declaracao de variaveis
    float conta_bancaria;
    float op1, op2, op3;

    // pede para o usuario digitar o saldo inicial da conta bancaria
    printf("Entre o saldo inicial (em reais):");
    scanf("%f", &conta_bancaria);


    // primeira operacao
    printf("Entre o valor da primeira operaço (em reais):");
    scanf("%f", &op1);

    /*
        foi utilizada a soma aqui pois se o valor for positivo ele soma no valor do saldo,
        ja se o valor for negativo ele ira subtrair pois a soma de um numero positivo com numero negativo eh uma subtracao
    */
    conta_bancaria = conta_bancaria + op1;
    //verifica se o saldo eh negativo
    if(conta_bancaria < 0){
        conta_bancaria = conta_bancaria - 10;
        printf("O saldo parcial eh de %.2f reais. Cuidado, saldo negativo (Taxa a pagar de 10 reais)\n", conta_bancaria);
    }else{
        printf("O saldo parcial eh de %.2f reais.\n", conta_bancaria);
    }




    // segunda operacao
    printf("Entre o valor da segunda operaço (em reais):");
    scanf("%f", &op2);

    /*
        foi utilizada a soma aqui pois se o valor for positivo ele soma no valor do saldo,
        ja se o valor for negativo ele ira subtrair pois a soma de um numero positivo com numero negativo eh uma subtracao
    */
    conta_bancaria = conta_bancaria + op2;
    //verifica se o saldo eh negativo
    if(conta_bancaria < 0){
        conta_bancaria = conta_bancaria - 10;
        printf("O saldo parcial eh de %.2f reais. Cuidado, saldo negativo (Taxa a pagar de 10 reais)\n", conta_bancaria);
    }else{
        printf("O saldo parcial eh de %.2f reais.\n", conta_bancaria);
    }




    // terceira operacao
    printf("Entre o valor da terceira operaço (em reais):");
    scanf("%f", &op3);

    /*
        foi utilizada a soma aqui pois se o valor for positivo ele soma no valor do saldo,
        ja se o valor for negativo ele ira subtrair pois a soma de um numero positivo com numero negativo eh uma subtracao
    */
    conta_bancaria = conta_bancaria + op3;

    //verifica se o saldo eh negativo
    if(conta_bancaria < 0){
        conta_bancaria = conta_bancaria - 10;
        printf("O saldo parcial eh de %.2f reais. Cuidado, saldo negativo (Taxa a pagar de 10 reais)\n", conta_bancaria);
    }else{
        printf("O saldo parcial eh de %.2f reais.\n", conta_bancaria);
    }


    return 0;
}
