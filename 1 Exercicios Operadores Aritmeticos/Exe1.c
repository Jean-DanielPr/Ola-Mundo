#include <stdio.h>
int main(int argc, char const *argv[]){
// Crie um programa que leia o nome e o salário de um funcionário, mostrando no 
// final uma mensagem.
    char nome[50];
    float salario;
    
    printf("Nome do funcionario: ");
    scanf("%s", &nome);
    printf("Qual e o salario de %s? R$", nome);
    scanf("%f", &salario);
// O scanf (%s) só consegue ler caracteres sem espaço entre elas.
    printf("Nome do funcionario: %s\n", nome);
    printf("Salario: R$%.2f\n", salario);

    return 0;
}
