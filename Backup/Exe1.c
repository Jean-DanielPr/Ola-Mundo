#include <stdio.h>
int main(int argc, char const *argv[]){
// 18) Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
// dela e depois mostre se ela pode ou não votar. 

    int idade;

    printf("Informe sua idade.\n");
    scanf("%i", &idade);

    if (idade >= 16){

        printf("Voce ja tem mais de 16 anos entao pode votar.");

    }
    
       return 0;
}
