//Escrever um programa que recebe um vetor com 10 posições tipo char contendo o gabarito de 10 questões
//de uma prova objetiva. Além disso ele deve receber uma matriz bidimensional contendo as respostas de uma
//turma de 20 alunos. Ao final o programa deve dar a nota de cada aluno e informar, para cada um deles se foi resposta a nota  = aprovado >7 / recuperação 5 a 7 / reprovador <5.

#include <stdio.h>
#include <locale.h>
#define linha 5				//alunos
#define coluna 10			//questões
#define tam 10

//Teste de commit

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i,j, certo, m[linha][coluna], gabarito[tam];
	
	do{
		for(i=0;i<tam;i++){
			printf("\n Resposta do gabarito da prova da questão %d = ", i+1);			//respostas do gabarito
			scanf("%d", &gabarito[i]);
			
			if(gabarito[i] < 1 || gabarito[i] > 5){
				printf("\n ESCREVE ENTRE 1 e 5 ");
				i--;
			}
		}
		
	} while (gabarito[i] < 1 && gabarito[i] > 5);
	
	if(gabarito[i] > 1 || gabarito[i] < 5){
		
		printf("\n*********************Alunos***********************\n");
		
		do{
			//solicitando as respostas dos alunos
			for(i=0; i<linha; i++){
				for(j = 0; j<coluna; j++){
					printf("\nDigite a resposta do aluno %d questão %d : ", i+1,j+1);
					scanf("%d", &m[i][j]);	
					
					//Verificar a escrita do usuario
					if(m[i][j] < 1 || m[i][j] > 5){
						printf("\n ESCREVE ENTRE 1 e 5 ");
						j--;
					}
				}
			}
			
			//comparando a resposta do gabarito com a dos alunos
			for(i=0;i<linha;i++){
				
				//certo = 0 é pra zerar
				certo = 0;
				
				for(j=0;j<coluna;j++){
					if( m[i][j] == gabarito[j]){
						certo++;
					}
				}
				
				//if dizendo que o aluno foi aprovado
				if(certo >= 7){
					printf("\nO aluno %d foi aprovado tirando a nota %d ", i+1, certo);
				}
				
				//if dizendo que o aluno ficou em recuperação
				if(certo < 7 && certo >= 5){
					printf("\nO aluno %d foi pra exame tirando a nota %d ", i+1, certo);	
				}
				
				//if dizendo que o aluno foi reprovado
				if(certo < 5){
					printf("\nO aluno %d foi reprovado tirando a nota %d ", i+1, certo);	
				}
			}
		
		} while (m[i][j] < 1 && m[i][j] > 5);
		
	}//Fim if valores

	return 0;
}
