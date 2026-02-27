#include <stdio.h>
int main(int argc, char const *argv[]){
//Faça um programa que leia um número inteiro e mostre o seu antecessor e seu 
//sucessor.  

    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
//Esqueci de colocar o & comercial para ler a variável e fiquei um tempão tentando entender o que estava errado rs 

    int ant = num - 1;
    int suc = num + 1;

    printf("O antecessor de %d e %d.\n", num, ant);
    printf("O sucessor de %d e %d.\n", num, suc);

    return 0;
}
