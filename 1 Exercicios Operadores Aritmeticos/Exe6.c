#include <stdio.h>
int main(int argc, char const *argv[]){
//13) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o 
// seu novo salário, com 15% de aumento.

    float sal, aum, novsal;

    printf("Informe seu salario atual R$");
    scanf("%f", &sal);
    
    aum = (sal * 15) / 100;
    novsal = sal + aum;

    printf("Seu novo salario sera de R$ %.2f com 15%% de aumento.", novsal);
   
    return 0;
}
