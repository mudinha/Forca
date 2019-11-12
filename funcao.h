#ifndef FORCA_H_INCLUDED
#define FORCA_H_INCLUDED
#define TAMANHO_PALAVRA 20
/* definição de uma Macro para limpeza do console */
#ifdef _WIN32
# define CLEAR_SCREEN system ("cls")
#else
# define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif


struct noSecreto{
    int status;
    char palavra[31];
    char assunto[101];
    struct noSecreto * prox;
};
int conta(char *str);
typedef struct noSecreto NoSecreto;
typedef struct noSorteada NoSorteada;

int temPalavraNaoUsada(NoSecreto *l);
NoSecreto * retiraUmElemento (NoSecreto* l, char v[31]);
NoSecreto * insere (NoSecreto* l, char i[31]);
int tamanhoListaSecreta(NoSecreto *l);
NoSecreto * retornaPalavraPos(NoSecreto *l, int pos);
int geraAleatorio(int maximo);
NoSecreto * inicializaListaSecreta();
NoSecreto * carregaListaArquivo(NoSecreto *l, char nomeArq[255]);
void imprimeListaSecreta(NoSecreto *l);
NoSecreto * inserePalavraSecreta(NoSecreto *l,char word[31],char subject[100]);
NoSecreto * sorteiaPalavra(NoSecreto *l);

//retorna no tamanho da lista, para saber o intervalo de valores para gerar uma posicao
//aleatoria, para sortear uma palavra secreta
int tamanhoListaSecreta(NoSecreto *l);

//retorna a palavra que esteja em uma dada posição na lista de palavras secretas
NoSecreto * retornaPalavraPos(NoSecreto *l, int pos);
int letraexiste(char letra);
int chuteserrados();
int enforcou();
void abertura();
void chuta();
int jachutou(char letra);
int ganhou();
void desenhaforca();
void escolhepalavra();
void adicionapalavra();
void dica();

#endif // FORCA_H_INCLUDED
