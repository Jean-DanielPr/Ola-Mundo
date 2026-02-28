#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
//Peça para o usuário digitar três números inteiros diferentes (ex: a, b e c). O programa deve usar if e else if para descobrir e imprimir qual é o maior deles.

    int n1, n2, n3;

    printf("Informe o 1 numero: ");
    scanf("%i", &n1);
    printf("Informe o 2 numero: ");
    scanf("%i", &n2);
    printf("Informe o 3 numero: ");
    scanf("%i", &n3);

    printf("Analisando...\n");
    system("pause");
    if (n1 == n2 && n1 == n3){
        printf("Todos os numeros sao iguais.\n");
    } else if(n1 >= n2 && n1 >= n3){
        printf("O numero %i foi o maior numero digitado.\n", n1);
    } else if(n2 >= n1 && n2 >= n3){
        printf("O numero %i foi o maior numero digitado.\n", n2);
    } else {
        printf("O numero %i foi o maior numero digitado.\n", n3);
    }
    
// Eu tinha colocado somente o ">" nos ifs isso poderia gerar um bug caso um usuario digitasse "5" "5" e "3"
// O programa faria a primeira verificação e veria que o 5 nao seria maior 5 entao daria falso, nesse caso ele nem ia conferir a segunda ja que o conectivo "&&" necessita que as duas sejam verdade. O programa pararia no else e me diria que o num 3 e o maior numero digitado.
// Trocando o ">" pelo "=>" eu tiro essa chance do programa dar esse erro.

    return 0;
}
