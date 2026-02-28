#include <stdio.h>
int main(int argc, char const *argv[]){

    float m;

    printf("Informe sua nota:\n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aluno aprovado(a)!\n");
    } else {
        printf("Aluno reprovado(a)!\n");
    }
// Como seria a leitura do caso acima
// Se a media do aluno for maior ou igual a 7.0, entao imprima na tela a mensagem "Aluno aprovado".
// Senao, imprima a mensagem "Aluno reprovado".
    return 0;
}
