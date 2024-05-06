/*
    Pedro de Oliveira Trento

        Escreva um programa que inicialmente leia do teclado o número de alunos de uma turma. Após,
    o programa deve ler, para cada aluno, seu conceito final (A, B, C, D ou F), seu ano de ingresso
    na universidade, e o percentual de frequência (numero real entre 0 e 1). Caso a frequência seja
    menor do que 0.75, o conceito deve ser armazenado como F, independente do conceito informado
    pelo usuário. O programa deve calcular e informar na tela:
     O número de alunos aprovados (conceitos D e F reprovam) com ingresso apos 2022
     A frequência média (percentual) dos alunos aprovados com conceito A
     A menor frequência registrada entre todos os alunos
*/
#include <stdio.h>

#define ANO 2022

int main(){
    int n_alunos, ano_ingresso, quanti_apro, index_a = 0;
    char conceito;
    float percent_freq, soma_freq, med_freq, menor_freq = 1;


    printf("Digite o numero de alunos na turma:");
    scanf("%d", &n_alunos);
    for(int i = 0; i < n_alunos; i++){
        printf("Digite o conceito, ano de ingresso e percentual de frequencia do aluno %d:", i +1);
        scanf(" %c %d %f", &conceito, &ano_ingresso, &percent_freq);

        if(percent_freq < 0.75){
            conceito = 'F';
        }
        if(ano_ingresso > ANO && conceito != 'd' && conceito != 'D' && conceito != 'f' && conceito != 'F'){
            quanti_apro++;
        }

        if(conceito == 'A' || conceito == 'a'){
            soma_freq = percent_freq + soma_freq;
            index_a++;
        }


        if(menor_freq > percent_freq){
            menor_freq = percent_freq;
        }

    }

    med_freq = soma_freq/ index_a;

    printf("Numero de alunos aprovados om ingresso apos 2022:%d\n", quanti_apro);
    printf("Frequencia media (percentual) dos alunos aprovados com conceito A: %.0f%\n", 100 * med_freq);
    printf("Menor frequencia registrada entre todos os alunos: %.0f%\n", 100 * menor_freq);



    return 0;
}
