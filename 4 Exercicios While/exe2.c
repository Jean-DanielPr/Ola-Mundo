#include <stdio.h>
int main()
{
    int cont = 0, tab;
    printf("Qual tabuada deseja ver?\n");
    scanf("%i", &tab);
    printf("-------------\n");
    while(cont < 10){
        cont++;
        printf("%i x %i = %i\n", tab, cont, tab*cont);
    }
    return 0;
}
