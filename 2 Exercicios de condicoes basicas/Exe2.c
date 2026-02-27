#include <stdio.h>
int main(int argc, char const *argv[]){
// Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
// situação em relação ao alistamento militar. - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o 
// alistamento. - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do 
// alistamento. 

    int idade, atraso;

    printf("Informe sua idade.\n");
    scanf("%d", &idade);
// Novamente eu esqueci o (&) comercial para ler a variavel, mas dessa vez eu encontrei o erro mais rapido.

    if (idade >= 18){

        atraso = idade - 18;
        printf("Voce ja deve se alistar.\nJa se passaram %d anos do seu alistamento.", atraso); 

    }
    if (idade < 18){

        printf("Voce ainda nao esta no tempo de se alistar.");

    }
    
    return 0;
}
