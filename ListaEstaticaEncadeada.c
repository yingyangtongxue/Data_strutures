#include "ListaEstaticaEncadeada.h"
#define PRIM() ->prim
#define PROX() ->prox
#define DISPO() ->dispo

Lista* FLVazia(Lista* li){
	li=/*(Lista *)*/ calloc(1,sizeof(Lista));
	if(li!=NULL){
		li->prim=-1;
		li->dispo=0;
		li->A[0].prox=0;  
	}
	return li;
}

void Vazia(Lista* li, int flag){
	if(li->prim==-1){
		flag=1;
	}
	else{
		flag=0;
	}
	//return flag;
}

void Retira(Lista* li,int num, int pos, int flag){

}