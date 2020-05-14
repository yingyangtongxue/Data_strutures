#include <stdio.h>
#include <stdlib.h>
#include "ListaEstaticaEncadeada.c"

struct vazio{
	
};

void continuar(){
	int op;
	do{
		printf("Você deseja continuar? sim=1 e nao=0\n");
		scanf("%d",&op);
	}while(op<0||op>1);
	if(op==1){
		system("clear");
		menu();
	}
	else{
		system("clear");
		exit(1);
	}
}

int menu(){
	int opcao;
	do{
		printf("Escolha uma opcao: \n");
		printf("1- Criar uma lista estatica encadeada\n");
		printf("2- Testar se a lista está vazia ou não\n");
		scanf("%d",&opcao);
	}while((opcao<1)&&(opcao>2));
	return opcao;
}

int main(void){
	int flag;
	struct lista vazio; 
	switch(menu()){
		case 1:
			system("clear");
			printf("Opcao 1: Criar uma lista estatica encadeada \n");
			if(FLVazia(&vazio)!=0){
				printf("Lista criada\n");
				continuar();
			}
			else{
				printf("Erro na criacao da lista\n");
				continuar();
			}
			break;
		case 2:
			system("clear");
			printf("opcao 2: Testar se a lista esta vazia ou nao\n");
			Vazia(&vazio,flag);
			if(flag==1){
				printf("A lista esta vazia\n");
				continuar();
			}
			else{
				printf("A lista não esta vazia ou nao foi criada\n");
				continuar();	
			} 
			break;
	}

	system("Pause");
	return(0);
}