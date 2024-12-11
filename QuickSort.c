#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int const TAM = 200000; 

int Separa (int p, int r, int v[]) {
    int c, j, k, t;
    c = v[r]; j = p;
    for (k = p; /*A*/ k < r; k++) {
        if (v[k] <= c) {
        t = v[j], v[j] = v[k], v[k] = t;
        j++;
        }
    }
    v[r] = v[j], v[j] = c;
    return j;
}

void Quicksort (int p, int r, int v[]) {
    int j;
    if (p < r) {
        j = Separa (p, r, v);
        Quicksort (p, j - 1, v);
        Quicksort (j + 1, r, v);
    }
}

int main(){
    clock_t t; //variável para armazenar tempo
    int vetor[TAM];
    int a;
    
    //semente de aleatoriedade
    srand((unsigned)time(NULL));

    //geração aleatório dos valores do vetor
    for(a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    
    t = clock(); //armazena tempo
    Quicksort(0,TAM-1,vetor);
    t = clock() - t; //tempo final - tempo 

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
