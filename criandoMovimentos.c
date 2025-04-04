#include <stdio.h>
    /*Simular os movimentos das seguinte peças de xadrez bispo, rainha e torre,
    cpm while, do while e for. Deve imprimir os movimentos;
    TORRE - move em linha reta horizontal ou verticalmente - simule 5 casas para a direita;
    BISPO - mover em diagonal, cinco casas na diagonal para cima e à direita "Cima, Direita";
    RAINHA - Move-se em tdas as direções - oito casas para a esquerda*/
int main(){

    int movimentoCompleto = 1;
    int i = 1, numero = 1;
        //RAINHA
        printf("Rainha\n");

    while (i <= 8) //tenha certeza que não ocorrerá o loop infinito.
    {
        printf("Esquerda!\n");
        i++;
    }
        
        //TORRE
        printf("Torre\n");
    for ( i = 0; i < 6; i++)
    {
        printf("Esquerda!\n");
    }
           
        printf("Bispo\n");
    do
    {
        printf("Cima-Direita\n");   
        numero++;
    } while (numero <= 5);
        
   
            



    return 0;
}