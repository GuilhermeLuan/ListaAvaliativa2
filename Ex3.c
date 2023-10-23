#include <stdio.h>

int main() {
    int primeiraMatriz[4][4];
    int segundaMatriz[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &primeiraMatriz[i][j]);
        }
    }

//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            scanf("%d", &segundaMatriz[i][j]);
//        }
//    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", primeiraMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}