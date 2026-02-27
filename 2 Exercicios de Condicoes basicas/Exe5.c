#include <stdio.h>
int main(int argc, char const *argv[]){
// Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos 
// para todos, mas especialmente para mulheres. Faça um programa que leia nome, 
// sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo 
// que: - Homens ganham 5% de desconto - Mulheres ganham 13% de desconto 

    char nome[50];
    char sexo;
    float valor, desc, valor_com_desconto;

    printf("Informe o seu nome:\n");
    scanf("%s", nome);
    printf("Informe o seu sexo [M/F]:\n");
    scanf(" %c", &sexo);
// Quando eu uso um scanf("s") o programa vai ler tudo que eu digitar e também vai ler a tecla enter que eu apertar sendo assim    
// Quando eu coloco um scanf("%c") o programa vai acabar lendo um enter que foi digitado no último scanf e que acabou ficando guardado no lixo/buffer
// E vai pular o scanf(sexo) e guardar um espaço em branco dentro da variável sexo
// Para contornar isso eu devo colocar um espaço antes do %c ficando assim scanf(" %c") esse comando diz para o programa ignorar todos os espaços em branco que estão guardados na fila de espera da memória e não vai pular o meu scanf
    printf("Informe o valor da compra:\n");
    scanf("%f", &valor);

    if (sexo == 'F'){

        desc = (valor * 13 ) / 100;
        valor_com_desconto = valor - desc;
        printf("%s, voce recebeu 13%% de desconto e pagara R$%.2f pela sua compra.", nome, valor_com_desconto);

    }

    if (sexo == 'M'){
        
        desc = (valor * 5) / 100;
        valor_com_desconto = valor - desc;
        printf("%s, voce recebeu 5%% de desconto e pagara R$%.2f pela sua compra.", nome, valor_com_desconto);
        
    }

    return 0;
}
