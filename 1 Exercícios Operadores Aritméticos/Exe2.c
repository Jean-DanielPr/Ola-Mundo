#include <stdio.h>
int main(int argc, char const *argv[]){

//  Faça um programa que leia as duas notas de um aluno em uma matéria e mostre 
// na tela a sua média na disciplina. 

    float n1, n2, media;

    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A media entre as notas %.2f e %.2f e = %.2f.\n", n1, n2, media);

    return 0;
}
