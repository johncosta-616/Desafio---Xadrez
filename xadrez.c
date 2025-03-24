#include <stdio.h>

//XADREZ - RECURSIVIDADE - PROCEDIMENTOS:

//recursividade torre

void recursiveLoop_torre(int n){
    if(n <= 5){
        printf("você está na %dº casa à direita\n", n);
        recursiveLoop_torre(n + 1);
    }
}

//recursividade bispo

void recursiveLoop_bispo(int w){
    if(w <= 5){
        printf("você está na %dº casa acima, e à direita\n", w, w);
        recursiveLoop_bispo(w + 1);
    }
}

//recursividade rainha

void recursiveLoop_rainha(int z){
    if(z <= 8){
        printf("você está na %dº casa à esquerda\n", z);
        recursiveLoop_rainha(z + 1);
    }
}

int main(){

    int i = 1, h = 1, g = 1;
    int j, k = 1, a = 1 ; //variáveis que serão usadas no loop alinhado
    int x = 4, y = 4;  //variáveis das posições dos cavalos

    printf("***BEM-VINDO AO JOGO DE XADREZ***\n");

    //TORRE

    printf("Você está jogando com a Torre\n");
      recursiveLoop_torre(i);
    
    //BISPO

    printf("\nVocê está jogando com o Bispo agora!\n");
      recursiveLoop_bispo(h);

    //RAINHA

    printf("\nVocê está jogando com a Rainha agora!\n");
      recursiveLoop_rainha(g);
    
    //CAVALO: 

    printf("\nVocê está jogando com o cavalo agora!\n");

    //LOOP EXTERNO

    for(j = 1; j < 3; j++){
       y++;
       printf("Movendo para cima: (%d, %d)\n", y , x );

       //LOOP INTERNO
       
       while(a < 3){
        x++;
        printf("Movendo para direita: (%d, %d)\n", y , x);
        a++;  
       }
    } 
    return 0;
}
