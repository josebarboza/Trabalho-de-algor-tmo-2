//Escreva um programa que recebe um número inteiro entre 2 e 20 e mostra o Triângulo de Pascal até a linha definida por esse número. 
#include <time.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int pascal[50], i, j, contador, numLinhas;
			
	do{
		printf("\n Escreva um número entre 2 e 20 para o triângulo de Pascal: ");
		scanf("%d", &numLinhas);	
		
		if(numLinhas < 2 || numLinhas > 20){
			printf("\n Escreva entre 2 e 20 ");
		}
		
	} while ( numLinhas < 2 || numLinhas > 20);
	
	if(numLinhas < 2 || numLinhas <= 20){

//		contador = 0;
		//início do ciclo que irá repetir.
		for(i = 1; i <= numLinhas; i++){		
			
			//Construindo o Triângulo // aqui é onde vai preencher todo o triângulo em 1 coluna e a escada.
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
			
			//Imprimindo o triângulo
			for(j = 0; j < contador; j++){
				printf("%d  ", pascal[j]);
			}
		}
	}
	return 0;
}
