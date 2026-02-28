#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
//Peça para o usuário digitar seu IMC (Índice de Massa Corporal) e classifique-o:
// Abaixo de 18.5: "Abaixo do peso"
// Entre 18.5 e 24.9: "Peso normal"
// Entre 25.0 e 29.9: "Sobrepeso"
// 30.0 ou mais: "Obesidade"

    float peso, imc, alt;

    printf("Informe seu peso em Kg:\n");
    scanf("%f", &peso);
    printf("Informe sua altura m:\n");
    scanf("%f", & alt);

    imc = peso / (alt * alt);

// O que for comum a todos os resultados fica fora do if
    printf("----------------\n");
    printf("Analisando...\n");
    system("pause");
    if(imc < 18.5){
        printf("Abaixo do peso.\n");
    } else if(imc >= 18.5 && imc < 25){
        printf("Peso normal.\n");
    } else if(imc >= 25.0 && imc < 30){
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }
    printf("-----------------\n");

    return 0;
}
