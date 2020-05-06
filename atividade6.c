#include <stdio.h>

int main() {
	int num, somaResto=0, cont;
	
	
	printf("Digite um numero para saber se e primo:\n");
	scanf("%d", &num);
	
	if(num<=0){
		printf("\nApenas numeros maiores que zero");
	}else {
		for (cont =1; cont <= num;cont ++) {
		if (num % cont==0)
			somaResto++;
			
	}
	if (somaResto == 2)
		printf("\nO numero %d e primo.", num);
	else
		printf("O numero %d nao e primo.", num);	
	
}
}
