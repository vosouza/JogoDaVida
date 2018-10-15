#include <stdio.h>
#include "jogoDaVida.h"

//define a matriz como 0 para todos os campos
void inicializarAmbiente(){
	int x,y;
	for(x=0;x<MAXCOLUNA;x++){
		for(y=0;y<MAXLINHA;y++){
			primeiraGeracao[x][y] = 0;
			proximaGeracao[x][y] = 0;
		}
	}
	
}

//Funcao muda o estado da celula, se estiver viva ela morre e se estiver morta ela vive
//essa funoes muda a matriz da proxima geracao
void mudarCelulaProximaGeracao(int col, int li){
	if(proximaGeracao[col][li] == 0){
		proximaGeracao[col][li] = 1;
	}else if(proximaGeracao[col][li] == 1){
		proximaGeracao[col][li] = 0;
	}	
}

//Funcao muda o estado da celula, se estiver viva ela morre e se estiver morta ela vive
//Essa funcoes muda a matriz da geracao inicial
void mudarCelula(int col, int li){
	if(primeiraGeracao[col][li] == 0){
		primeiraGeracao[col][li] = 1;
	}else if(primeiraGeracao[col][li] == 1){
		primeiraGeracao[col][li] = 0;
	}	
}

//Funcao para pegar a coordenada que o usuario pretende mudar de estado
//ele manda a coordenada e a funcao chama a funcao mudarCelula
void definirGeracao(int col,int li){
	int sair =1, x,y;
	while(sair){
		limparTela();
		mostrarGeracao(col, li);
		printf("Digite as coordenadas separadas por espaco para mudar o estado da celula\ncoordenada: ");
		fflush(stdin);
		scanf("%d %d", &x,&y);
		mudarCelula(x,y);
		printf("\n deseja continuar sim(digite 1) nao(digite 0)\nresposta: ");
		fflush(stdin);
		scanf("%d",&sair);
	}
	
}
// comeca a simulacao
void iniciarSimulacao(int col, int li,int qtdGeracoes, int velocidade){
	int sair =1, celulasVivas, x,y;
	while(sair){
		limparTela();
		//se a qtd de geracoes for maior que 1, entao o sistema simulara com pausa
		if(qtdGeracoes>1){
			//
		}else{
			//percorre todas as celulas para verificacao
			for(x=0;x<=li;x++){
				for(y=0;y<=col;y++){
					
						celulasVivas = verificaCelula(col,li,x,y);//o numero de celulas vivas ao redor;
					
				}
			}
		}

		espelharMatriz(col,li); // troca as celulas de vetores
		limparProximaGeracao();
		mostrarGeracao(col, li);
		printf("\n deseja continuar sim(digite 1) nao(digite 0)\nresposta: ");
		fflush(stdin);
		scanf("%d",&sair);
	}
	
}

//Funcao para passar as celulca da matriz auxiliar para a matrix principal
void espelharMatriz(int col, int li){
	int x,y;
	for(x=0;x<=li;x++){
		for(y=0;y<=col;y++){
			primeiraGeracao[x][y] = proximaGeracao[x][y];
		}
	}
}

// Conta quantas celulas estao vivas ao redor da celular principal
//depois verifica qual regra se aplica a celula central
//devolve 0 quando a celula deve morrer e 1 quando a celula deve viver ou sobreviver
int verificaCelula(int col, int li,int posicaoCol,int posicaoLi){
	int x,y,contar=0, decisao;
	for(x=posicaoCol - 1;x<=posicaoCol+1;x++){
		for(y=posicaoLi - 1;y<posicaoLi+2;y++){
			
				if(x == posicaoCol && y == posicaoLi){  
					//Para não contar a celula central
					
				}else{
					//para contar as celulas perifericas
					if(primeiraGeracao[x][y] == 1){
						//se os ponto na matriz estiver vivo adiciona 1 ao contador
						contar++;
					}
						
					
				}	
				
		}
	}
	switch(contar){
		case 0:
			 //morre
			break;
		case 1:
			 //morre
			break;
		case 4:
			 //morre
			break;
		case 5:
			 //morre
			break;
		case 6:
			 //morre
			break;
		case 7:
			 //morre
			break;
		case 8:	
			 //morre
			break;
		case 2:
			 // sobrivive
			if(primeiraGeracao[posicaoCol][posicaoLi] == 1){
				mudarCelulaProximaGeracao(posicaoCol,posicaoLi);
				// se a celula da primeira geracao estiver viva entao
				//no vetor da proxima geracao ela sobrevive
			}
			break;
		case 3:
		// sobrivive ou nasce
	
				mudarCelulaProximaGeracao(posicaoCol,posicaoLi);
	
			break;
	}
	return decisao;
}

void limparProximaGeracao(){
		int x,y;
	for(x=0;x<MAXCOLUNA;x++){
		for(y=0;y<MAXLINHA;y++){
			proximaGeracao[x][y] = 0;
		}
	}
	
}
