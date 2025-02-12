#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int arr[], int n) {
    int i, j, temp, troca = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                troca++;
            }
        }
    }
    return troca;
}

int main() {
    int N, L;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &L);
        int vagoes[L];
        for (int j = 0; j < L; j++) {
            scanf("%d", &vagoes[j]);
        }
        printf("Optimal train swapping takes %d swaps.\n", (bubbleSort(vagoes, L)));
    }
    return 0;
}
