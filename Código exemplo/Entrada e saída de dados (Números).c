#include <stdio.h>
int main(int argc, char const *argv[]){

    int N1, N2, soma, subt, divi, mult;

    printf("Digite um numero: ");
    scanf("%d", &N1);
    printf("Digite outro numero: ");
    scanf("%d", &N2);
// O (scanf) precisa que eu indique o que será lido (número, caractere etc) e em qual variável será guardado a informação lida.

    soma = N1 + N2;
    subt = N1 - N2; 
    divi = N1 / N2;  
    mult = N1 * N2;

    printf("SOMA: %d.\n", soma);
    printf("SUBTR...: %d.\n", subt);
    printf("DIVI...: %d.\n", divi);
    printf("MULT...: %d.\n", mult);
// O comando (\n) faz com que o programa pule para a linha de baixo.

// O comando (%d) dentro das ("") faz com que apareça o conteúdo da variável que voce digitar após a vírgula fora das aspas.

}
