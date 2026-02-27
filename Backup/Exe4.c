#include <stdio.h>
int main(int argc, char const *argv[]){
//  Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou 
// ÍMPAR. 

    int num;
    
    printf("Informe um numero\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        
        printf("O numero %d e PAR.\n", num);

    }
    if (num % 2 != 0){

        printf("O numero %d e IMPAR.\n", num);

    }

    return 0;
}
