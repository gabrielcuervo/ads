#include <stdio.h>

int main (void){
	
	int num, cont=0, maiorNum, menorNum;
		
	while(cont < 90000){
		printf("Digite um numero\n");
		scanf("%d", &num);
		
	if(cont == 0){
      maiorNum = num;
      menorNum = num;
    }else if(num > maiorNum){
      maiorNum = num;      
    }else if(num < menorNum){
      menorNum = num; 
    }

    cont++;	
	}
	
	printf("\nMaior numero:%d ", maiorNum);
	printf("\nMenor numero: %d", menorNum);
	
}
