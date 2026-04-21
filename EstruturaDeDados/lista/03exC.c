// receba por entrada dados um vetor de números reais com 8 elementos e inverta a ordem dos
// elementos desse vetor
#include <stdio.h>
#include <stdlib.h>

int main() {
float numerosReais[8];
float vetorInvertido[8];


for(int i = 0; i < 8; i++){
    printf("\nDigite o valor da %dº posição do vetor: ", i+1);
    scanf("%f", &numerosReais[i]);
}

printf("Segue aqui os valores invertidos: \n");

for(int i = 0; i < 8; i++){
    vetorInvertido[i] = numerosReais[8 - i - 1];
    printf("%.2f \n", vetorInvertido[i]);
}

return 0;
}

