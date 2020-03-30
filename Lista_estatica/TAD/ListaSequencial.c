#include "ListaSequencial.h"

struct lista{
	int qntdd;
	struct aluno dados[MAX];
};

Lista* cria_lista(){
	Lista *li;
	li=(Lista*) malloc(sizeof(struct lista));
	if(li!=NULL)
		li->qntdd=0;
	return li;
}

void libera_lista(Lista* li){
	free(li);
}

int insere_lista_final(Lista* li, struct aluno al){
	if(li==NULL) return(0);
	if(lista_cheia(li))
		return(0);
	li->dados[li->qntdd]=al;
	li->qntdd++;
	return(1);

}