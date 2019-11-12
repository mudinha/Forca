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

int resp;
char nome;
char aux;
    int help = 0;
    int a = 0;
    int b = 0;
    int n = 0;
    int cont = 0;
    char letra;

int main() {

    printf("1 - Configuracao\n");
	printf(" 2 - Jogar\n");
	printf(" 0 - Sair\n");
	scanf("%d", &resp);

	switch(resp){
        case 1:
            printf("Digite seu nome:\n");
            scanf(" %c",&nome);
            break;

    case 2:
    abertura();
	escolhepalavra();

	do {
        dica();
		desenhaforca();
		chuta();

} while (!ganhou() && !enforcou());

	if(ganhou()) {
		printf("\nParabéns, você ganhou!\n\n");

		printf("       ___________      \n");
		printf("      '._==_==_=_.'     \n");
		printf("      .-\\:      /-.    \n");
		printf("     | (|:.     |) |    \n");
		printf("      '-|:.     |-'     \n");
		printf("        \\::.    /      \n");
		printf("         '::. .'        \n");
		printf("           ) (          \n");
		printf("         _.' '._        \n");
		printf("        '-------'       \n\n");

	} else {
		printf("\nPuxa, você foi enforcado!\n");


		printf("    _______________         \n");
		printf("   /               \\       \n");
		printf("  /                 \\      \n");
		printf("//                   \\/\\  \n");
		printf("\\|   XXXX     XXXX   | /   \n");
		printf(" |   XXXX     XXXX   |/     \n");
		printf(" |   XXX       XXX   |      \n");
		printf(" |                   |      \n");
		printf(" \\__      XXX      __/     \n");
		printf("   |\\     XXX     /|       \n");
		printf("   | |           | |        \n");
		printf("   | I I I I I I I |        \n");
		printf("   |  I I I I I I  |        \n");
		printf("   \\_             _/       \n");
		printf("     \\_         _/         \n");
		printf("       \\_______/           \n");


		printf("A palavra era **%s**\n\n", palavrasecreta());
	}
	break;

	case 0:
        system(exit);
	}
}
