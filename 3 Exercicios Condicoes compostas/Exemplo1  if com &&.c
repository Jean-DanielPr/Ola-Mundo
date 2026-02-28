#include <stdio.h>
int main(int argc, char const *argv[]){

    float m;

    printf("Informe sua nota:\n ");
    scanf("%f", &m);

    if (m >= 4.0 && m <= 7.0){

        printf("O aluno tem direito ao reteste.\n");

    }
    
    return 0;
}
