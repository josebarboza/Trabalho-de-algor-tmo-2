//Escrever um programa que recebe uma matriz 2x2 ou 3x3 e calcula o seu determinante, 
//caso o determinante seja diferente de zero, deve encontrar e mostrar a matriz inversa.
#include <time.h>
#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    int i, j,TAM, det2, det3;
    float matriz[3][3], cofator[3][3];
    
    do{
        printf("\n Qual é matriz que você deseja 2x2(2) | 3x3(3):  ");  // laço solicitando ao usuário se ele quer matrz po 2 ou 3, se for diferente vai ficar repetindo o laço ate ser
        scanf("%d", &TAM);                                                //esses valores.
        
        if(TAM !=2 && TAM != 3){
            printf("\n Escreva entre 2 ou 3");
        }
        
    } while (TAM !=2 && TAM != 3);
    
    if(TAM == 2 || TAM == 3){
        //solicitando dados e calculando o determinante d matriz 2x2
        if(TAM == 2){
            
            //Pedir valores 2x2
            for(i = 0; i < TAM; i++){
                for(j = 0; j < TAM; j++){
                    printf("\nEntre com o valor na posicao [%d][%d]", i,j);
                    scanf("%f", &matriz[i][j]);
                }
            }
            
            //Calcula Determinante 2x2
            det2 =  (matriz[0][0] * matriz[1][1])
                    -
                    (matriz[1][0] * matriz[0][1]);
            
            //Verifica se determinante é diferente de 0
            if (det2 != 0) {
                
                //Transforma em matriz inversa
                cofator[1][1] = (matriz[0][0] / det2); // Mantem 
                cofator[0][1] = (matriz[0][1] / det2) * - 1; // Troca
                cofator[1][0] = (matriz[1][0] / det2) * - 1; // Troca
                cofator[0][0] = (matriz[1][1] / det2); // Mantem
                
            }
            
            //Mostrar Inversa 2x2
            for (i=0; i<TAM; i++) {
                for (j=0; j<TAM; j++) {
                    printf("\t%f", cofator[i][j]);
                }
                printf("\n");
            }
            
            //Mostra determinante de 2x2
            printf("Determinante da Matriz 2x2: %d\n", det2);
            
        } //Fim if 2x2
        
        //solicitando dados e calculando o determinante d matriz 3x3
        if(TAM == 3){
            //Receber dados para matriz
            for(i = 0; i < TAM; i++){
                for(j = 0; j < TAM; j++){
                    printf("\nEntre com o valor na posicao [%d][%d]", i,j);
                    scanf("%f", &matriz[i][j]);
                }
            }
            
            //Calcula Determinante de ordem 3
            det3 = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                    (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                    (matriz[0][2] * matriz[1][0] * matriz[2][1]))
                    -
                   ((matriz[2][0] * matriz[1][1] * matriz[0][2]) +
                    (matriz[2][1] * matriz[1][2] * matriz[0][0]) +
                    (matriz[2][2] * matriz[1][0] * matriz[0][1]));
            
            //Verifica se determinante é diferente de 0
            if (det3 != 0) {
                //Encontrar e mostrar a matriz inversa
                //Fazer vários testes nesse bloco
                //Calcula cofatores da matriz e trasforma ela em transposta
                cofator[0][0] = ((matriz[1][1] * matriz[2][2]) - (matriz[2][1] * matriz[1][2])) / det3; //Mantem
                cofator[1][0] = (((matriz[1][0] * matriz[2][2]) - (matriz[2][0] * matriz[1][2])) * - 1) / det3; //Troca
                cofator[2][0] = ((matriz[1][0] * matriz[2][1]) - (matriz[2][0] * matriz[1][1])) / det3; //Mantem
                cofator[0][1] = (((matriz[0][1] * matriz[2][2]) - (matriz[2][1] * matriz[0][2])) * - 1) / det3; //Troca
                cofator[1][1] = ((matriz[0][0] * matriz[2][2]) - (matriz[2][0] * matriz[0][2])) / det3; //Mantem
                cofator[2][1] = (((matriz[0][0] * matriz[2][1]) - (matriz[2][0] * matriz[0][1])) * - 1) / det3; //Troca
                cofator[0][2] = ((matriz[0][1] * matriz[1][2]) - (matriz[1][1] * matriz[0][2])) / det3; //Mantem
                cofator[1][2] = (((matriz[0][0] * matriz[1][2]) - (matriz[1][0] * matriz[0][2])) * - 1) / det3; //Troca
                cofator[2][2] = ((matriz[0][0] * matriz[1][1]) - (matriz[1][0] * matriz[0][1])) / det3; //Mantem
                
            }
        
            //Mostrar Inversa 3x3
            for (i=0; i<TAM; i++) {
                for (j=0; j<TAM; j++) {
                    printf("\t%f", cofator[i][j]);
                }
                printf("\n");
            }
            
            //Mostra o determinante de 3x3
            printf("Determinante da Matriz 3x3: %d\n", det3);
            
        }//Fim IF Ordem 3
        
    }//Fim if TAM == 2 || TAM == 3
    
    //Mostrar Matriz
//    for (i=0; i<TAM; i++) {
//        for (j=0; j<TAM; j++) {
//            printf("\t%f", matriz[i][j]);
//        }
//        printf("\n");
//    }
    
    return 0;
}
