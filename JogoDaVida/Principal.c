#include <stdio.h>
#include "jogoDaVida.h"

void mudarGeracao();

void main(){

	int Nlinhas = 8, Ncolunas = 8, numeroGeracoes = 1, velocidade = 1;
	int menu, opcao = 4;
	inicializarAmbiente(); // inicializa as matrizes, esta no arquivo Regras.c
	primeiraGeracao[4][2] =1;
	primeiraGeracao[4][3] =1;
	primeiraGeracao[4][4] =1;
	while(opcao){		
		limparTela();
		introducao();
		opcao = pegarOpcao();
		
		switch(opcao){
			case 1:
					definirGeracao(Nlinhas, Ncolunas); // Permite ao usuario mudar a geracao, esta no arquivo Regras.c
				break;
			case 2:
					inicializarAmbiente(); // chama a funcao de inicializacao para limpar o ambiente, esta no arquivo regras.c
				break;
			case 3:
					numeroGeracoes = quantidadeGeracoes();// funcao para definir o numero de geracoes, esta no arquivo entradas.c
				break;
			case 4:
					Nlinhas	= ambienteLinhas(); // funcao para definir o tamanho do ambiente, esta no arquivo entradas.c
					Ncolunas = ambienteColunas();// funcao para definir o tamanho do ambiente, esta no arquivo entradas.c
				break;
			case 5:
					iniciarSimulacao(Nlinhas, Ncolunas, numeroGeracoes, velocidade);//esta no arquivo Regras.c
				break;
			case 6:
					velocidade = definirVelocidade();// esta no arquivo entradas.c
				break;
			case 0:
				opcao = 0;
				break;
			default:
				MensagemDeErro();
		}
	}

}


