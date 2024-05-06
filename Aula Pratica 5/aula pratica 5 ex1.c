/*
    Desenvolvido por: Pedro de Oliveira Trento
    A seguinte equação de recursão pode ser utilizada para calcular aproximadamente a raiz cúbica
de um número real r



xn+1 = xn −
x
3
n − r
3x
2
n
, para n ≥ 0
x0 dado
Escreva um programa em C que leia um número r, uma aproximação inicial x0 para sua raiz
cúbica, uma tolerância T positiva e o número máximo de iterações nmax. O programa deve
calcular iterações enquanto |xn+1 − xn| > T e número de iterações < nmax. Ao final, deverá
imprimir na tela o valor (aproximado) da raiz cúbica calculada pelo programa, e o número de
iterações realizadas. Use variáveis do tipo double no seu programa.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n_interacoes , n;
    double tolerancia, xn, x0, xn_ant, r;

    printf("Entre o numero do qual se quer extrair a raiz cubica:");
    scanf("%lf", &r);
    printf("Entre a aproximacao inicial: ");
    scanf("%lf", &x0);
    printf("Entre o numero maximo de iteracoes:  ");
    scanf("%d", &n_interacoes);
    printf("Entre a tolerancia:  ");
    scanf("%lf", &tolerancia);

    xn = x0;
    do{
        xn_ant = xn;
        xn = xn - ((pow(xn, 3) - r) / (3 * pow(xn,2)));
        n++;

    }while(fabs(xn-xn_ant) > tolerancia && n < n_interacoes);

    printf("A raiz cubica aproximada eh %.15lf, obtida com %d iteracoes", xn, n);

    return 0;
}
