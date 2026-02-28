#include <stdio.h>
int main(int argc, char const *argv[]){
    int d;
    printf("Informe um numero de 1 a 7:\n");
    scanf("%d", &d);
    switch(d){
        case 1:
            printf("Domingo!\n");
            break;
        case 2:
            printf("Segunda!\n");
            break;
        case 3:
            printf("Terca!\n");
            break;
        case 4:
            printf("Quarta!\n");
            break;
        case 5:
            printf("Quinta!\n");
            break;
        case 6:
            printf("Sexta!\n");
            break;
        case 7:
            printf("Sabado!\n");
            break;
        default:
            printf("Valor invalido!");
            break;
    }
    return 0;
}
// Nao esquecer do break apos o final de cada case se nao o programa roda os casos que estiverem na frente dele tambem.
