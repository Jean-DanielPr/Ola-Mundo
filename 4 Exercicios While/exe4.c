#include <stdio.h>
int main(int argc, char const *argv[])
{
    float guardado = 0, valor = 0;
// Sempre lembrar de inicializar a variavel se nao ela pode acabar pegando algum lixo de memoria

    printf("Cofrinho Digital.\n");
    printf("Quanto deseja guardar?\n");
    do { 
        printf("Digite [0] para encerrar.\n");
        printf("VALOR:\n");
        scanf("%f", &valor);
        guardado += valor;
/* Atalho do acumulador (+=) quando eu coloco esse atalho eu nao preciso fazer var = var + var2 
Ficando Var += Var2 (Variavel 1 recebe ela mesma mais Variavel 2)
E esse atalha serve para todos os operadores aritmeticos
        -= Ex: vida -= dano; (A vida recebe ela mesma menos o dano)
        *= Ex: pontos *= 2; (Os pontos recebem eles mesmos vezes 2 - o famoso dobro!)
        /= Ex: metade /= 2; (A variável recebe ela mesma dividida por 2)
*/
    } while (valor != 0);
    printf("Voce guardou R$%.2f.", guardado);
    return 0;
}
