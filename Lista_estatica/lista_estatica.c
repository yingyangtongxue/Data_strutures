#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

typedef struct lista{
	int A[MAX];
	int qntElem;
}LS;

void Insere_elementos(LS *p, int qnt){
	srand(time(NULL));
	for(int i=0;i<qnt;i++){
		p->A[i]=rand()%100;
		p->qntElem +=1;
	}
}

void Print_elementos(LS *p, int qnt){
	printf("\n");
	for(int i=0;i<qnt;i++){
		printf("%d \n", p->A[i]);
	}
}

void Inserir_elem_posicao_i(LS *p, int posicao,int elemento,int qnt){
	int aux[MAX];
	for(int i=posicao+1/*-1*/;i<qnt;i++){
		aux[i]=p->A[i];
	}
	p->A[posicao]=elemento;
	for (int i = posicao+1; i < qnt; i++){
		p->A[i]=aux[i];
	}
}

int main(void){
	int qnt,posicao,elemento;	
	LS lista;
	do{
		printf("Quantos elementos você deseja inserir: \n");
		scanf("%d",&qnt);
	}while((qnt<0)&&(qnt>100));
	printf("Lista gerada randomicamente:\n");
	Insere_elementos(&lista,qnt);
	Print_elementos(&lista,qnt);
	do{
		printf("Insira um elemento na posicao i: \n");
		scanf("%d",&posicao);
		printf("Qual e o elemento: \n");
		scanf("%d",&elemento);
	}while((0<posicao)&&(posicao>100));
	Inserir_elem_posicao_i(&lista,posicao,elemento,qnt);
	Print_elementos(&lista,qnt);

	system("Pause");
	return(0);
}