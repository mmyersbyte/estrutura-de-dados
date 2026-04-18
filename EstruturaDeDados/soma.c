//Receba números por entrada de dados e some seus valores.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];
    
    for(int i = 0; i < 5; i++){
        printf("\n Digite o número da %dº posição ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    int acc = 0;

    for(int i = 0; i < 5; i++){
        acc += numeros[i];
    }

    printf("A soma dos números inteiros positivos é %d", acc);    
    
    return 0;
}