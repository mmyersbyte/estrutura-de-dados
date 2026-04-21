#include <stdio.h>
#include <stdlib.h>

int main() {
    int aux, flag;
    int lista[10];
    
    for(int i = 0; i < 10; i++){
        printf("\nDigite o número da %dº posição ", i+1);
        scanf("%d", &lista[i]);
    }
    
    flag=1; // A FLAG SERVE para o while saber se houve alguma troca, caso haja, ele continua o processo, caso contrário, ele para, pois a lista já está ordenada.
    while(flag) {
        flag = 0;
        for(int i = 0; i <= 8; i++){
            
            if(lista[i] > lista[i+1]){
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                flag = 1;
            }
        }
    }


    printf("Lista ordenada: \n");
    
    for(int i = 0; i < 10; i++){
        printf("\nO indice %d tem o valor %d", i+1, lista[i]);
    }
    
    return 0;
}