#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "forca.c"
#include "funcao.h"

void copyright(){
    system("clear");
    printf("=============================================================\n\n");
    printf("JOGO DA FORCA\n");
    printf("Desenvolvido por: \n\tJulia Cristina - 18140\n");
    printf("\tGabriel Leite - 18129\n");
    printf("=============================================================\n\n");
}

int limpaTela()
{
puts("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
return 0;
}

int main(int argc, char *argv[])
{
    NoSecreto * lstSecreta = inicializaListaSecreta();
    char fNameArq[255];
    NoSecreto * sorteada;
    int posSorteada=0;
    int tamanhoLista=0;

    strcpy(fNameArq,"palavras.dat");

    if(argc>1){
      strcpy(fNameArq,argv[1]);
    }

    printf("Arquivo de dados: %s\n\n",fNameArq);

    copyright();

    lstSecreta = carregaListaArquivo(lstSecreta,fNameArq);
    imprimeListaSecreta(lstSecreta);
    tamanhoLista = tamanhoListaSecreta(lstSecreta);

    do{
        CLEAR_SCREEN;
        imprimeListaSecreta(lstSecreta);
        printf("\n");
        sorteada= sorteiaPalavra(lstSecreta);
        if(sorteada!=NULL){
            printf("%s\n", sorteada->palavra);
        }else{
            printf("N�o tem palavra dispon�vel!\n\n");
        }
    }while(getchar()!='f');


    return 0;
}
