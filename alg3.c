#include <stdio.h>

int main(){

int idade, soma=0, cont=0;

printf("Digite um número: ");
scanf("%d",&idade);

while (cont < 100){
soma += idade;
cont++;
scanf("%d",&idade);
}

printf("Soma = %.2f\n", soma);

return 0;
}
