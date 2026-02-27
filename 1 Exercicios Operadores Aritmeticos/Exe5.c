#include <stdio.h>
int main(int argc, char const *argv[]){
// 10) Faça um algoritmo que leia a largura e altura de uma parede, calcule e 
// mostre a área a ser pintada e a quantidade de tinta necessária para o serviço, 
// sabendo que cada litro de tinta pinta uma área de 2 metros quadrados.

    float alt, larg, area, litro;
    
    printf("Qual a altura da parede? \n");
    scanf("%f", &alt);
    printf("Qual a largura da parede? \n");
    scanf("%f", &larg);

    area = alt * larg;
    litro = area / 2;

    printf("Voce vai precisar de %.2f litros de tinta para pintar a parede completa. \n", litro);

    return 0;
}
