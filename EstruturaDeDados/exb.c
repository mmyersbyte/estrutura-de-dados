//calcule a soma dos N primeiros números inteiros positivos. O valor de N deve ser obtido
//através da entrada de dados.

#include <stdio.h>
#include <stdlib.h>

int main() {
int n = 0;
int soma = 0;

printf("Digite o valor de N: ");
scanf("%d", &n);

if(n <= 0){
    printf("\n APENAS NÚMEROS INTEIROS");
}else{
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    
}



printf("O valor da soma é: %d", soma);
return 0;
}