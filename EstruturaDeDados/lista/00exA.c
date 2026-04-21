#include <stdio.h>

int main(void){

int lista[10];

for(int i = 0; i <= 9; i++){
    printf("Digiteee o %d valor\n", i+1);
    scanf("%d", &lista[i]);

}

int menorValor = lista[0];
int indice = 0;
//


for(int i = 0; i < 10; i++){
    if(lista[i] < menorValor){
    menorValor = lista[i];
    indice = i;
    }
}


printf("\nO menor valor é: %d", menorValor);
printf("\nO indice do menor valor é: %d", indice);


return 0;

}
