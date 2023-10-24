#include <stdio.h>

void lerValores(int array[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        scanf("%d", &array[i]);
    }
}

void imprimirArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        if (i == tamanho - 1) {
            printf("%d", array[i]);
        } else {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}


void calcularSomaEAtualizar(int array[], int tamanho) {
    int novoArray[tamanho - 1];

    for (int i = 0; i < tamanho - 1; ++i) {
        int soma = array[i] + array[i + 1];
        if (i == tamanho - 2) {
            printf("%d", soma);
        } else {
            printf("%d ", soma);
        }
        novoArray[i] = soma;
    }

    printf("\n");

    for (int i = 0; i < tamanho - 1; ++i) {
        array[i] = novoArray[i];
    }
}

int main() {
    int primeiroArray[10];

    lerValores(primeiroArray, 10);
    imprimirArray(primeiroArray, 10);

    for (int i = 0; i < 9; ++i) {
        calcularSomaEAtualizar(primeiroArray, 10 - i);

    }

    return 0;
}
