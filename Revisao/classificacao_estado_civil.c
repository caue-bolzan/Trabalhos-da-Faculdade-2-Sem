#include <stdio.h>
int main (){
    char escolha[12];

    scanf ("%s", &escolha[1]);

    switch (escolha[1])
    {
    case 'c':
        printf("Casado");
        break;
    
    case 's':
        printf("Solteiro");

    case 'd':
        printf("Divorciado");
    
    default:
        printf("Alguma letra errado")
        break;
    }


    return 0;
}