#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Jogador {
    int overral;
};


int main(){

    struct Jogador jogadores[22];
    char times[2][200];

    for (int j = 0; j < 2; ++j) {
        scanf("%199s", times[j]);
        for (int i = 0; i < 11; ++i) {
            char nome[200];
            int overral;
            scanf("%199[^;];%*c;%d", nome, &overral);
            jogadores[i + j * 11].overral = overral;

        }
    }

    double avgPrimeiroTime = (8 * jogadores[0].overral + 10 * (jogadores[1].overral + jogadores[4].overral)
            + 5 * (jogadores[2].overral + jogadores[3].overral)
            + 8 * (jogadores[5].overral + jogadores[6].overral)
            + 11 * (jogadores[7].overral + jogadores[8].overral)
            + 12 * (jogadores[9].overral + jogadores[10].overral)) / 100.0;

    double avgSegundoTime = (8 * jogadores[11].overral
                + 10 * (jogadores[12].overral + jogadores[15].overral)
                + 5 * (jogadores[13].overral + jogadores[14].overral)
                + 8 * (jogadores[16].overral + jogadores[17].overral)
                + 11 * (jogadores[18].overral + jogadores[19].overral)
                + 12 * (jogadores[20].overral + jogadores[21].overral)) / 100.0;

    printf("%s: %.2lf de forca\n", times[0],avgPrimeiroTime);
    printf("%s: %.2lf de forca\n", times[1],avgSegundoTime);

    char timeMaisForte[200];
    if(avgPrimeiroTime > avgSegundoTime){
        strcpy(timeMaisForte, times[0]);
    } else {
        strcpy(timeMaisForte, times[1]);
    }

    printf("%s eh mais forte\n", timeMaisForte);

    return 0;
}