#define MAXCOLUNA 200
#define MAXLINHA 200
#define CELVIVA 1
#define CELMORTA 0

int primeiraGeracao[MAXCOLUNA][MAXLINHA], proximaGeracao[MAXCOLUNA][MAXLINHA];

void introducao();
int pegarOpcao();
void MensagemDeErro();

int ambienteLinhas();
int ambienteColunas();

void limparTela();

void mostrarGeracao(int col,int linh);

void inicializarAmbiente();

void mudarCelula(int col, int li);

void definirGeracao(int col,int li);
int definirVelocidade();
int quantidadeGeracoes();

void iniciarSimulacao(int col, int li,int qtdGeracoes, int velocidade);
void espelharMatriz(int col, int li);
int verificaCelula(int col, int li,int posicaoCol,int posicaoLi);
void limparProximaGeracao();
