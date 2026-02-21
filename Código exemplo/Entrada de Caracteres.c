#include <stdio.h>
int main(int argc, char const *argv[]){

    char nome[50];
    int idade;
    float peso;
//Para declarar uma variavel char eu preciso colocar entre [] o numero de espaços que o sistema vai reservar para ela,

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
 //O comando (%s) vai ler uma sequencia de caracteres e (%c) só lê 1 caractere isolado.
 //O comando (%d) ou (%i) Vai ler números inteiros. 
 //O comando (%f) vai ler números REAIS.  

    printf("Seu nome e %s.\n", nome);
    printf("Sua idade e %d.\n", idade);
    printf("Seu peso e %.2fKg.\n", peso);
//No (%.2f) o .2 indica quantas casas decimais o programa vai me mostrar após a vírgula,
    return 0;
}
