# define MAX 100

struct aluno{
	int matricula;
	char nome[30];
	float n1,n2,n3;	
};

typedef struct lista Lista;


Lista* cria_lista();
void libera_lista(Lista* li);
int insere_lista_final(Lista* li,struct aluno al); 



