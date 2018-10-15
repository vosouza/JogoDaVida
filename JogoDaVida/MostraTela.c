#include <stdio.h>
#include "jogoDaVida.h"

//Texto do menu
void introducao(){
	printf("------------------ BEM VINDO AO JOGO DA VIDA ------------------\n");
	printf(" 1 - Definir Primeira geracao\n");
	printf(" 2 - Limpar Ambiente\n");
	printf(" 3 - Definir numero de geracaoes\n");
	printf(" 4 - Definir Tamanho do ambiente\n");
	printf(" 5 - Comecar simulacao\n");
	printf(" 6 - definir velocidade de simulacao \n");
	printf(" 0 - Sair\n");
	printf(" Digite sua opcao: ");
}

//Mensagem de erro generica
void MensagemDeErro(){
	printf("\nVoce digitou um valor invalido\n");
}

//Funcao para limpar a tela do console
void limparTela(){
	system("cls");
}

//Mostra a geracao com base nas variaveis globais
//Mostra o vetor principal
void mostrarGeracao(int col,int linh){
	int x, y, num;
	for(x=0;x<=linh;x++){
		if(x == 0){								// Funcao para colocar os numero
			printf("\t");						// na parte de cima do quadro
			for(num=0;num<=col;num++){
				if(num<10){
					printf(" %d ",num);
				}else if(num>=10){
					printf("%d ",num);
				}
			}
			printf("\n");
		}
		
		printf("%d\t",x);
		for(y=0;y<=col;y++){
			
			if(primeiraGeracao[x][y] == 1){					//verifica se a celula é morta ou viva e
				printf(" 0 ");								// printa conforme esta na matriz
			}else if(primeiraGeracao[x][y] == 0){
				printf(" - ");
			}
		}
		printf("\n");
	}

}

