#include <stdio.h>
int main(int argc, char const *argv[]){

    int menu;

    printf("Menu do restaurante.\n");
    printf("Digite o numero referente ao prato para saber o valor.\n");
    printf("[1] Pizza:\n");
    printf("[2] Hamburguer\n");
    printf("[3] Salada\n");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf("Pizza R$30\n");
            break; // O break manda o programa sair do switch
        case 2:
            printf("Hamburguer R$40\n");
            break;
        case 3:
            printf("Salada R$20\n");
            break;
        default: // É o equivalente ao seu "else"
            printf("Opcao invalida.\n");
    }

    return 0;
}
