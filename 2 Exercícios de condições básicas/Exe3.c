#include <stdio.h>
int main(int argc, char const *argv[]){
// 17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
// 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
// o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. 

    int vel;
    float multa;

    printf("Qual a velocidade do carro Km ");
    scanf("%i", &vel);

    if (vel > 80){

        multa = (vel - 80) * 5;  
        printf("O carro ultrapassou os 80Km. \nFoi multado em R$%.2f considerando R$5 por cada Km acima de 80.", multa);
    
    }

    return 0;
}
