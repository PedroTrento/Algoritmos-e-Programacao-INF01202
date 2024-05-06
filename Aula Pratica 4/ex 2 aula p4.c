/*
    Pedro de Oliveira Trento
    Uma das maneiras de calcular o cosseno de um ângulo (em radianos) é através da Série de
Taylor-Maclaurin:
cos x =
X∞
n=0
(−1)n
(2n)! x
2n = 1 −
x
2
2! +
x
4
4! − · · ·
Na prática, pode-se aproximar o valor da série acima usando os N primeiros termos apenas.
Escreva um programa em C que leia um ângulo em radianos x do teclado, o número de termos
desejado N, e calcule o valor aproximado de cos x. Ao nal, o programa deve informar o valor
aproximado, juntamente com o valor fornecido pela função cos, contida na biblioteca math.h.
Obs.: O programa deve validar se o valor de N é realmente um valor estritamente positivo.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int flag = 0;
    int N , fatorial;
    float x, Termo, soma, multi, constante;

    while(flag == 0){
        printf("Entre os valores de x e N:");
        scanf("%f %d", &x, &N);
        if(N < 0){
            printf("Numero errado faca novamente\n");
        }else{
            flag = 1;
        }
    }


    for(int i = 0; i < N; i++){
        fatorial = 1;
        for(int j = (2 * i); j > 1; j--){
            fatorial = fatorial * j;
        }
        Termo = (pow(-1, i) * pow(x,(2*i)))/ fatorial;
        soma = Termo + soma;
    }

    printf("Valor aproximado de coseno de %f eh: %f\n", x, soma);
    printf("Valor de cos(%f) pela funcao C eh: %f\n", x, cos(x));
    return 0;
}
