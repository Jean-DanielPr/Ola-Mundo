#include <stdio.h>
int main(int argc, char const *argv[]){
    
// Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) 
//e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45. 

    float real, dol;

    printf("Quantos reais voce tem: R$");
    scanf("%f", &real);

    dol = real / 3.45;

    printf("Voce pode comprar $%.2f Dolares. \n", dol);
    return 0;
}
