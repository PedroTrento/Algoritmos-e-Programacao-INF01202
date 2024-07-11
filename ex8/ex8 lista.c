#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_FUN 50
#define TAM_STRING 100

int main(){
    char nome [NUM_FUN][TAM_STRING] = {0};
    int idade [NUM_FUN] = {0};
    char cargo [NUM_FUN][TAM_STRING] = {0};
    int salario [NUM_FUN];
    int aux_funcionario = 0;
    char aux_string[TAM_STRING] = {0};
    int aux_salario = 0;
    int qnt_funcionarios = 0;
    int soma = 0;
    int media = 0;
    int maior_salario = 0;

    char menu = {0};

    for(int i = 0; i > NUM_FUN; i++){
        idade[i];
    }

    while(menu != 'L'){
        printf("Menu\nDigite:\nF: cadastro de funcionario;\nC: cadastro de cargo;\nB: busca funcionario;\nS: buscar salario;\nQ: quantidade de funcionarios;\nR: relatorio;\nL: para terminar o codigo.\n");
        menu = getchar();
        menu = toupper(menu);

        switch(menu){
            case 'F':
                getchar(); // lembrar de colocar o char para não dar problema
                printf("Digite o nome do funcionario: ");
                gets(nome[aux_funcionario]); // gets não pega o \n, mas não é a melhor opção da problema se escrever algo maior que o tamanho da string. Diferente do fgets que pega o \n mas limita o tamanho da string
                printf("Digite a idade do funcionario: ");
                scanf(" %d", &idade[aux_funcionario]);
                getchar();
                printf("Digite o cargo do funcionario: ");
                gets(cargo[aux_funcionario]);
                aux_funcionario++;
            break;
            case 'C':
                getchar();
                printf("Digite o nome do cargo: ");
                gets(aux_string);
                printf("Digite o salario do cargo: ");
                scanf("%d", &aux_salario);
                for(int i = 0; i < NUM_FUN; i++){
                    if(strcmp(aux_string,cargo[i]) == 0){
                        salario[i] = aux_salario;
                    }
                }
            break;
            case 'B':
                getchar();
                printf("Digite o nome do funcionario que buscas: ");
                gets(aux_string);
                for(int i = 0; i < NUM_FUN; i++){//pensa sempre bem ali na condiçao do for não erro por bobagem
                    if(strcmp(aux_string,nome[i]) == 0){
                        printf("\tNome do funcionario: %s\n\tIdade do funcionario: %d\n\tCargo do funcionario: %s\n", nome[i], idade[i],cargo[i]);
                    }
                }
            break;
            case 'S':
                getchar();
                printf("Digite o salario de um funcionario que buscas: ");
                scanf(" %d", &aux_salario);
                for(int i = 0; i < NUM_FUN; i++){
                    if(aux_salario == salario[i]){
                        printf("\tSalario do funcionario: %d\n", salario[i]);
                        break;
                    }
                }
            break;
            case 'Q':
                qnt_funcionarios = 0;
                getchar();
                for(int i = 0; i < NUM_FUN; i++){
                    if(idade[i] != 0){
                        qnt_funcionarios++;
                    }
                }
                printf("\tQuantidade de funcionarios na empresa %d\n", qnt_funcionarios);
            break;
            case 'R':
                qnt_funcionarios = 0;
                for(int i = 0; i < NUM_FUN; i++){
                    if(idade[i] != 0){
                        qnt_funcionarios++;
                    }
                    soma += salario[i];
                    if(salario[i] > maior_salario){
                        maior_salario = salario[i];
                    }
                }
                media = soma/qnt_funcionarios;
                printf("\tMedia dos salarios: %d\n\tMaior salario: %d\n",media,maior_salario);
            break;
            case 'L':
                printf("Terminando codigo");
            break;
        }

    }
}
