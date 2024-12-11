#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

const int TAM = 10;

void Insercao(int n, int v[]) {
    int i, j, x;
    for (j = 1; /*A*/ j < n; j++) {
        x = v[j];
        for (i = j-1; i >= 0 && v[i] > x; i--){
            v[i+1] = v[i];
            v[i+1] = x;
        }
    }
}

int main(){
    clock_t t; //variÃ¡vel para armazenar tempo
    int vetor[10];
    int a;
    
    //semente de aleatoriedade
    srand((unsigned)time(NULL));

    //geraÃ§Ã£o aleatÃ³rio dos valores do vetor
    for(a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    //Verificando tempo de execuÃ§Ã£o do bubble sort=> t2
    t = clock(); //armazena tempo
    Insercao(TAM-1,vetor);
    t = clock() - t; //tempo final - tempo 

    //imprime o tempo na tela
    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversÃ£o para double

    return 0;
}
