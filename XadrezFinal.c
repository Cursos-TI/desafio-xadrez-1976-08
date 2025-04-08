#include <stdio.h>

// Criando procedimento em comum para Rainha e Torre, assim economizei linhas
void moverPeca(int numero){ 
    if (numero > 0)
    moverPeca(numero - 1);
    printf("Esquerda\n");
       
    
}
//Como o movimento do bispo é diferenciado necessário um procedimento a parte
void moverBispo(int numero){
    if (numero >0)
        moverBispo(numero - 1);
        printf("Cima\n");
        printf("Esquerda\n");
    
}

int main(){
//Declarando as variáveis que serão utilizadas para os movimentos
int rainha = 7;
int torre = 5;
int bispo = 5;


printf("\n++++++++JOGO DE XADREZ++++++++++\n");
    //operador tem a opção de lançar os movimentos
   /*printf("Digite a quantidade de movimentos para Rainha: \n"); 
    scanf("%d", &rainha);*/
    printf("Rainha movendo ...\n");
    
   
    moverPeca(rainha);
    printf("\n");
    
    //operador tem a opção de lançar os movimentos
    /*printf("Digite a quantidade de movimentos para Torre: \n"); 
    scanf("%d", &torre);*/
    printf("Torre movendo ...\n");
      
    moverPeca(torre);
    printf("\n");

    printf("Bispo movendo...\n");
    moverBispo(bispo);
    printf("\n");
   
    //printf("Esquerda\n");
   // moverPeca(bispo);
    //printf("Direita\n");

    //Cavalo utilizado o loop aninhado

    printf("Cavalo\n");
    for (int i = 0, j =0; i < 2, j <= 1; i++, j++)
    {
        printf("Cima\n");
    }
        printf("Direita\n");  

    printf("Movimento finalizado!...\n");


    return 0;
}