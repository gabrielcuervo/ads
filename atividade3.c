#include <stdio.h>
int main(void){
	
	int numAlunos,cont;
	float n1, n2, n3, somaMedia, mediaAluno, mediaTurma, porcentagemV, porcentagemF, contAp;
	cont=0;
	somaMedia=0;
	contAp=0;
		printf("Ola professor, insira o numero de alunos:\n");
		scanf("%d",&numAlunos);
		while(cont < numAlunos){

		printf("\n\nInsira as 3 notas do aluno\n");
		scanf("%f %f %f",&n1, &n2, &n3);
		
		mediaAluno = (n1+n2+n3)/3;
		printf("Media do aluno: %.2f\n", mediaAluno);
		if(mediaAluno < 6){			
			printf("Aluno reprovado");}
			else{
				contAp++;
				printf("Aluno aprovado");
				}
		
	somaMedia = somaMedia + mediaAluno;	
	mediaTurma=somaMedia/numAlunos;
	cont++;	
		}		
		printf("\n\nMedia da turma: %.2f", mediaTurma);		
		porcentagemV = (contAp/numAlunos)*100;		
		printf("\n\nPorcentagem de aprovados na turma:%.2f", porcentagemV);		
		porcentagemF = 100 - porcentagemV;		
		printf("\nPorcentagem de reprovados na turma:%.2f",porcentagemF);	
}
