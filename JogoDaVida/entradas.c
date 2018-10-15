#include <stdio.h>
#include "jogoDaVida.h"

int pegarOpcao(){
	int i = 0;
	scanf("%d", &i);
	return i;
}

//Func para definir o tamanho da matriz que sera ambiente
//Fica no loop até que usuario digite um valor valido que eh o valor maximo da matriz
int ambienteLinhas(){
	int verifica =1, numb;
	while(verifica){
		limparTela();
		printf("------------------ JOGO DA VIDA ------------------\n\n");
		printf(" Defina a quantidade de colunas ambiente de simulacao (max 200):");
		fflush(stdin);
		scanf("%d", &numb);
		if(numb<=MAXLINHA){
			verifica = 0;
		}else{
			MensagemDeErro();
		}
	}
	return numb;
}
int ambienteColunas(){
	int verifica =1 , numb;
	while(verifica){
		limparTela();
		printf("------------------ JOGO DA VIDA ------------------\n\n");
		printf(" Defina a quantidade de linhas ambiente de simulacao (max 200):");
		fflush(stdin);
		scanf("%d", &numb);
		if(numb<=MAXCOLUNA){
			verifica = 0;
		}else{
			MensagemDeErro();
		}
	}
	return numb;
}

int quantidadeGeracoes(){
	limparTela();
	int x;
	printf("------------------ JOGO DA VIDA ------------------\n\n");
	printf("Digite a quantidade de geracoes a serem simuladas(1 para fazer passo a passo)\nquantidade: ");
	fflush(stdin);
	scanf("%d",&x);
	return x;
}
int definirVelocidade(){
		limparTela();
	int x;
	printf("------------------ JOGO DA VIDA ------------------\n\n");
	printf("Digite a velocidade das geracoes a serem simuladas(1 ate 10)\nVelocidade: ");
	fflush(stdin);
	scanf("%d",&x);
	return x;
}






