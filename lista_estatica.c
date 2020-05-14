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
		p->qntElem++;
	}
}

void Print_elementos(LS *p, int qnt){
	printf("\n");
	for(int i=0;i<qnt;i++){
		printf("%d \n", p->A[i]);
	}
}

int Print_recursivo(LS *p,int qnt, int tamanho){
	if(qnt<tamanho)
		printf("%d \n", Print_recursivo(p,qnt+1,tamanho));
	return p->A[tamanho-qnt];
}

void Print_recursivo2(LS *p, int i){
	//printf("qntdd elem %d  i %d\n", p->qntElem, i);
	if(i< p->qntElem){
		printf("%d\n",p->A[i]);
		Print_recursivo2(p,i+1);
	}	
		//printf("valor de i %d",i);
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
	lista.qntElem=0;
	do{
		printf("Quantos elementos você deseja inserir: \n");
		scanf("%d",&qnt);
	}while((qnt<0)&&(qnt>100));
	printf("Lista gerada randomicamente:\n");
	Insere_elementos(&lista,qnt);
	Print_elementos(&lista,qnt);
	printf("qntdd elem lista %d \n", lista.qntElem);
	do{
		printf("Insira um elemento na posicao i: \n");
		scanf("%d",&posicao);
		printf("Qual e o elemento: \n");
		scanf("%d",&elemento);
	}while((0<posicao)&&(posicao>100));
	Inserir_elem_posicao_i(&lista,posicao,elemento,qnt);
	Print_elementos(&lista,qnt);

	printf("PRINT RECURSIVO\n");
	puts("\n\n\n");
	Print_recursivo(&lista,0,qnt);
	puts("\n\n\n");
	printf("PRINT RECURSIVO 2\n");
	//printf("qntdd elem lista %d \n", lista.qntElem);
	Print_recursivo2(&lista,0);
	puts("\n\n\n");
	system("Pause");
	return(0);
}