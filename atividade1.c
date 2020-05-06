#include <stdio.h>
void main()

{

int multiplicador, numBase, n1, n2, soma = 0, cont = 0;

printf("Digite o primeiro numero: ");

scanf(" %d", &n1);

printf("Digite o segundo numero: ");

scanf(" %d", &n2);

if(n1 < n2){

multiplicador = n1;

numBase = n2;

}

else{

multiplicador = n2;

numBase = n1;

}

printf("Resultado: ");

while (cont != multiplicador){

soma = soma + numBase;

cont++;

}

printf("%d", soma);


}



	
	
	
