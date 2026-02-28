#include <stdio.h>
int main(int argc, char const *argv[]){
//  Faça um algoritmo que pergunte a distância que um passageiro deseja 
// percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para 
// viagens até 200Km e R$0.45 para viagens mais longas.

    int dist;
    float passagem;

    printf("Informe a distancia ate o destino em Km. \n");
    scanf("%i", &dist);

    if (dist <= 200){

        passagem = dist * 0.50;
        printf("O valor do seu passe sera R$%.2f.\n", passagem);

    }
    if (dist > 200){

        passagem = dist * 0.45;
        printf("O valor do seu passe sera R$%.2f.\n", passagem);

    }

    return 0;
}
