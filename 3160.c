#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
	char nome[15];
	struct cel *seg;
};

typedef struct cel celula;

void Inserir(char y[], celula *p){
	celula *nova;
	nova = malloc(sizeof(celula));
	strcpy(nova->nome, y);
	nova->seg = NULL;
	while(p->seg != NULL){
		p = p->seg;
	}
	p->seg = nova;
}

celula *Busca(char x[], celula *lst){
	celula *p;
	p = lst;
	while(p != NULL && strcmp(p->seg->nome, x) != 0){
		p = p->seg;
	}
	return p;
}

void InserirApos(char y[], celula *p){
	celula *nova;
	nova = malloc(sizeof(celula));
	strcpy(nova->nome, y);
	nova->seg = p->seg;
	p->seg = nova;
}

void Imprimir(celula *lst){
	celula *p;
	for(p = lst->seg; p != NULL; p = p->seg){
		if(p->seg == NULL)
			printf("%s\n", p->nome);
		else
			printf("%s ", p->nome);
	}
}

int main(){
	celula *cabeca = malloc(sizeof(celula));
	strcpy(cabeca->nome, "cabeca");
	cabeca->seg = NULL;
	char l[1000], n[1000], s[15];
	char *nome;
	celula *anterior;
	gets(l);
	gets(n);
	gets(s);

	nome = strtok(l, " ");
	while(nome != NULL){
		Inserir(nome, cabeca);
		nome = strtok(NULL, " ");
	}
	
	if(strcmp(s, "nao") == 0){
		nome = strtok(n, " ");
		while(nome != NULL){
			Inserir(nome, cabeca);
			nome = strtok(NULL, " ");
		}
	}
	else{
		celula *anterior = Busca(s, cabeca);
		nome = strtok(n, " ");
		while(nome != NULL){
			InserirApos(nome, anterior);
			nome = strtok(NULL, " ");
			anterior = anterior->seg;
		}
	}
	
	Imprimir(cabeca);
}
