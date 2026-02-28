#include <stdio.h>
int main(int argc, char const *argv[]){
// Menu de Restaurante
// Crie um programa que exiba um pequeno menu:
// Pizza
// Hambúrguer
// Salada
// O usuário deve digitar o número da opção.
// Se escolher 1, diga o preço da Pizza.
// Se escolher 2, diga o preço do Hambúrguer.
// Se escolher 3, diga o preço da Salada.
// Se digitar qualquer outro número, diga "Opção inválida".

    int menu;

    printf("Menu do restaurante.\n");
    printf("Digite o numero referente ao prato para saber o valor.\n");
    printf("[1] Pizza:\n");
    printf("[2] Hamburguer\n");
    printf("[3] Salada\n");
    scanf("%d", &menu);

    if(menu == 1){
        printf("Pizza R$30\n");
    } else if(menu == 2){
        printf("Hamburguer R$40\n");
    } else if(menu == 3){
        printf("Salada R$20\n");
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
