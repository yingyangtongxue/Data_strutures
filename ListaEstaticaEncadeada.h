#define MAX 100

struct reg{
	int elem;
	int prox;
};
struct lista{
	int dispo;
	int prim;
	struct reg A[MAX];
};

typedef struct lista Lista;


Lista* FLVazia(Lista* li); 
void Vazia(Lista* li, int flag);