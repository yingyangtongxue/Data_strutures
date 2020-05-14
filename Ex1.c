/*Write a routine that returns the number of elements in a list.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int content;
	struct Node *next;
}Knot;

typedef struct list{
	Knot *start;
}List;

void List_insertion(List *ptr, int content);
void Print_list(List *ptr);

int main(void){
	List lista;
	lista.start = NULL;
	
	List_insertion(&lista,1);
	List_insertion(&lista,2);
	List_insertion(&lista,3);
	List_insertion(&lista,4);
	List_insertion(&lista,5);
	List_insertion(&lista,6);
	List_insertion(&lista,7);
	List_insertion(&lista,8);
	List_insertion(&lista,9);
	List_insertion(&lista,10);

	printf("List: \n");
	Print_list(lista);
	printf("\n");

	system("Pause");
	return(0);
}

void List_insertion(List *ptr, int content){
	Knot *aux;
		aux = (Knot *)malloc(sizeof(Knot));
		aux->content=content;
		aux->next=NULL;
	if(ptr->start==NULL){
		ptr->start=aux;
	}
	else{
		
	}
}

void Print_list(List *ptr){
	if(ptr==NULL) return;
	if(ptr->start==NULL){
		printf("The list is empty\n");
		return;
	}
	else{
		List *p = ptr->start; //erro aqui nesse while
		while(p->next != NULL){
			printf("%d\n",p->content);
			p= p->next;
		}
		//printf("%d\n",p->content);
	}

}	