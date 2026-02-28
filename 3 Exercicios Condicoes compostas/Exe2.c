#include <stdio.h>
int main(int argc, char const *argv[]){
//Crie um programa que receba um número inteiro.
// Se o número for 0, imprima "O número é zero".
// Se for par, imprima "O número é par".
// Se for ímpar, imprima "O número é ímpar".

    int num;

    printf("Informe um numero:\n");
    scanf("%i", &num);

    if(num == 0){
        printf("O numero e zero.\n");
    } else if(num % 2 == 0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }
    
    return 0;
}
