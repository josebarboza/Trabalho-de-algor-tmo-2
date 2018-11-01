//Escreva um programa que recebe um n�mero inteiro entre 2 e 20 e mostra o Tri�ngulo de Pascal at� a linha definida por esse n�mero. 
#include <time.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int pascal[50], i, j, contador, numLinhas;
			
	do{
		printf("\n Escreva um n�mero entre 2 e 20 para o tri�ngulo de Pascal: ");
		scanf("%d", &numLinhas);	
		
		if(numLinhas < 2 || numLinhas > 20){
			printf("\n Escreva entre 2 e 20 ");
		}
		
	} while ( numLinhas < 2 || numLinhas > 20);
	
	if(numLinhas < 2 || numLinhas <= 20){

//		contador = 0;
		//in�cio do ciclo que ir� repetir.
		for(i = 1; i <= numLinhas; i++){		
			
			//Construindo o Tri�ngulo // aqui � onde vai preencher todo o tri�ngulo em 1 coluna e a escada.
			for(j = contador; j >= 0; j--){
				if(j == contador || j == 0){
					pascal[j] = 1;
				}
				//Ela vai somando e colocando no proximo vizinho abaixo.
/*				else{
					pascal[j] = pascal[j] + pascal[ j - 1];
				}*/
			}
			contador++;
			printf("\n"); // Pulando as linhas
			
			//Imprimindo o tri�ngulo
			for(j = 0; j < contador; j++){
				printf("%d  ", pascal[j]);
			}
		}
	}
	return 0;
}
