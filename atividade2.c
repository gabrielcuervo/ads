#include <stdio.h>

main (){

    int opcoes;
    float saldo, saldoFinal, saque, deposito;
    saldo = 0;
    
    while (1){
    printf("\nBem vindo ao caixa eletronico\nSelecione uma das opcoes\n1-Saldo\n2-Saque\n3-Deposito\n4-Sair\n");
    scanf("%d",&opcoes);
	
		
    if(opcoes == 1){
        printf("Saldo R$%.2f", saldo);
    }else if(opcoes == 2){
        printf("Saque\n");

        printf("Valor de saque: ");
        scanf("%f", &saque);

        if(saque > saldo){

            printf("Valor excedido em R$%.2f", saque - saldo);
			printf("\nSaldo atual: %2f", saldo);

        }else{
            saldo = saldo - saque;
            printf("Saldo atual: %.2f",saldo);
        }


    }else if(opcoes == 3){
        printf("Valor de deposito: ");
        scanf("%f", &deposito);
		if(deposito<0){
            printf("Deposito negativo invalido");
        }
        else if (deposito >=0){
            saldo=saldo+deposito;
            printf("\nSeu saldo final:%f",saldo);
        }
    }else if(opcoes == 4){
    	printf("Saindo...");
	
	break;
    }else{
        printf("Opçao Invalida");
    }
}
}
