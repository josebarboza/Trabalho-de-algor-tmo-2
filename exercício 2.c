
//receber uma matriz 3x3 ou 4x4 e o programa deve informar se a matriz é um quadrado mágico.
//quadrado magico: não repete numero, em sequencia, e que em todas as contas tem que ser o valor igual.
#include <time.h>
#include <stdio.h>
#include <locale.h>

//Mais Teste

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int matriz[4][4], i,j, TAM, aux, somaGeral, somaDS, flag = 0, menor, somaMatriz, formula3, formula4;

	do{
		printf("\n Qual é matriz que você deseja 3x3(3) | 4x4(4)? ");
		scanf("%d", &TAM);	
		
		if(TAM !=3 && TAM != 4){
			printf("\n Escreva entre 3 ou 4");
		}
		
	} while (TAM !=3 && TAM != 4);
	
	
	//Core do codigo
	if(TAM == 3 || TAM == 4){
	
		//Peço os valores da matriz
		for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				printf("\nEntre com o valor na posicao [%d][%d]", i,j);
				scanf("%d", &matriz[i][j]);	
				menor = matriz[i][j];
				somaMatriz += matriz[i][j];
			}
		}
		
	//	printf("\nSoma Matriz %d", somaMatriz);
		
		//Achar Menor Valor
		for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				if(matriz[i][j] < menor){
					menor = matriz[i][j];
				}
			}
		}
		
		//Mostrar Menor valor
//		printf("\n%d", menor);

		//Formula 3x3
		if(TAM == 3){
			formula3 = 9*menor + 36;
			if(formula3 != somaMatriz){
				flag = 1;
			}
		} else {
		
			//Formula 4x4
			formula4 = 16*menor + 120;
			if(formula4 != somaMatriz){
				flag = 1;
			}
			
		}
		
		//Soma Diagonal Principal
		somaGeral = 0;
		for(i = 0; i < TAM; i++){
       		somaGeral += matriz[i][i];
    	}
    	
    	//Mostrar Soma DP
//		printf("\nSoma da diagonal %d", somaDP);
		
		//Soma Linhas
		for(i = 0; i < TAM; i++){
			aux = 0;
			for(j = 0; j < TAM; j++){
				aux += matriz[i][j];
			}
			if(aux != somaGeral){
				flag = 1;
			}
		}
		
		//Mostrar a Soma da Linha
//		printf("\n Resultado da soma da LINHA: \n");
//		for(i = 0; i < TAM; i++){
//			printf("\t%d", somaLinha[i]);
//			printf("\n");
//		}

		//Soma Coluna
		for(j = 0; j < TAM; j++){
			aux = 0;
			for(i = 0; i < TAM; i++){
				aux += matriz[i][j];
			}
			if(aux != somaGeral){
				flag = 1;
			}
		}
		
		//Mostrar Soma da Coluna
//		printf("\n Resultado da soma da COLUNA: \n");
//		for(j = 0; j < TAM; j++){
//			printf("\t%d", somaColuna[j]);
//		}
		
		//Soma Diagonal Secundaria
		aux = 0;
		for(i = 0; i < TAM; i++){
	        aux += matriz[i][TAM - 1 - i];
	    }
	    if(aux != somaGeral){
			flag = 1;
		}
	    
	    //Mostrar Soma DS
//	    printf("\nSoma da diagonal %d", somaDS);
	
	}
	
	if(flag == 0){
		printf("\nÉ um quadrado mágico\n");
	} else {
		printf("\nNão é um quadrado mágico\n");
	}

	return 0;
}
