#include <stdio.h>
int main(int argc, char const *argv[]){
// Escreva um programa que leia a nota de uma aluno e informe o seu rendimento 
// Nota >= 9: "Excelente"
// Nota >= 7: "Bom"
// Nota >= 5: "Razoável"
// Nota < 5: "Insuficiente"

    float nota;

    printf("Informe sua nota:\n");
    scanf("%f", &nota);
    printf("--------------\n");
    printf("  Rendimento  \n");
// Sempre que pudermos evitar repetir algo dentro do codigo e melhor. 
// Eu tinha colocado esses 2 ultimos prints acima dentro de cada um dos ifs sem necessidade.

// Sempre comecar pelo maior numero, se eu tivesse comecado pelo nota >= 5 e colocado um 10 de primeira.
// Ele seria maior ou igual do que 5 entao o programa diria que minha nota e razoavel.
    if(nota >= 9){
        printf("  Excelente\n");
    } else if(nota >= 7){
        printf("  Bom     \n");
    } else if(nota >= 5){
        printf("  Razoavel  \n");
    } else {
        printf("  Insuficiente \n");
    }
    printf("--------------\n");
    return 0;
}
