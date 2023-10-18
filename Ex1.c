#include <stdio.h>

int main() {
    int primeiroArray[10];
    int segundoArray[10];
    int soma;
    int primeiro=0, segundo=1, proximo;

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &primeiroArray[i]);
    }

    for (int i = 1; i < 10; ++i) {
        soma = primeiroArray[primeiro] + primeiroArray[segundo];
        printf("%d ", soma);
        segundoArray[i-1] = soma;
        primeiro = segundo;
        segundo = 1 + i;
    }
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        primeiroArray[i] = segundoArray[i];
    }

    return 0;
}
