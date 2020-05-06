#include <stdio.h>

int main(void){
	
	int n, a1, r, teste, soma;
	
	printf("\nInsira o numero de termos da PA:\n");
	scanf("%d", &n);
	
	printf("\nInsira o primeiro termo:\n");
	scanf("%d", &a1);
	
	printf("\nInsira a razao:\n");
	scanf("%d", &r);
	
	teste = a1;
	
	teste = teste + r;
	
	printf("\nNumero de termos:%d\n",teste);
	
	soma = (a1+teste) * n;
	
	printf("\nSoma:%d\n", soma);	
}
