#include <stdio.h>
#include <string.h>

void subtrairMatrizes(int primeiraMatriz[4][4], int segundaMatriz[4][4], int terceiraMatriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            terceiraMatriz[i][j] = primeiraMatriz[i][j] - segundaMatriz[i][j];
        }
    }
}

void somarMatrizes(int primeiraMatriz[4][4], int segundaMatriz[4][4], int terceiraMatriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            terceiraMatriz[i][j] = primeiraMatriz[i][j] + segundaMatriz[i][j];
        }
    }
}

void multiplicarMatrizes(int primeiraMatriz[4][4], int segundaMatriz[4][4], int terceiraMatriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            terceiraMatriz[i][j] =
                    (primeiraMatriz[i][0] * segundaMatriz[0][j])
                    + (primeiraMatriz[i][1] * segundaMatriz[1][j])
                    + (primeiraMatriz[i][2] * segundaMatriz[2][j])
                    + (primeiraMatriz[i][3] * segundaMatriz[3][j]);
        }
    }
}

int main() {
    int primeiraMatriz[4][4], segundaMatriz[4][4], terceiraMatriz[4][4];
    char operacaoMatriz[5];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &primeiraMatriz[i][j]);
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &segundaMatriz[i][j]);
        }
    }

    scanf(" %s", &operacaoMatriz);

    if((strcmp(operacaoMatriz, "sub")) == 0){
        subtrairMatrizes(primeiraMatriz, segundaMatriz, terceiraMatriz);
    } else if ((strcmp(operacaoMatriz, "soma")) == 0){
        somarMatrizes(primeiraMatriz, segundaMatriz, terceiraMatriz);
    } else {
        multiplicarMatrizes(primeiraMatriz, segundaMatriz, terceiraMatriz);
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", terceiraMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}