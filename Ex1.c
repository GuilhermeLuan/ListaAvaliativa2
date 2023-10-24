#include <stdio.h>

int main() {
    int primeiroArray[10];

    for (int z = 0; z < 10; ++z) {
        scanf("%d", &primeiroArray[z]);
    }

    for (int i = 0; i < 10; ++i) {
        if (i == 9){
            printf("%d", primeiroArray[i]);
        } else {
            printf("%d ", primeiroArray[i]);
        }

    }
    printf("\n");
    for (int i = 0; i < 9; ++i) {
        int segundoArray[10 - i]; // Tamanho do array diminui a cada iteração

        for (int z = 0; z < 9 - i; ++z) {
            int soma = primeiroArray[z] + primeiroArray[z + 1];
            if (z == 8 - i){
                printf("%d", soma);
            } else{
                printf("%d ", soma);
            }

            segundoArray[z] = soma;
        }
        printf("\n");

        for (int z = 0; z < 9 - i; ++z) {
            primeiroArray[z] = segundoArray[z];
        }
    }

    return 0;
}
