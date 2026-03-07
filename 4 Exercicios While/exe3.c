#include <stdio.h>
int main(int argc, char const *argv[])
{  
    int escolha = 0;
    while(escolha != 4){
        printf("Qual preco deseja ver:\n");
        printf("[1] PIZZA.\n");
        printf("[2] HAMBURGUER.\n");
        printf("[3] SALADA.\n");
        printf("[4] SAIR DO MENU.\n");
        scanf("%i", &escolha);
        switch (escolha){
            case 1:
                printf("PIZZA R$30\n");
                break;
            case 2:
                printf("HAMBURGUER R$40\n");
                break;
            case 3:
                printf("SALADA R$20\n");
                break;
        }
    }
    printf("Voce saiu do menu!");
    return 0;
}
