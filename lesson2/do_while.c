#include <stdio.h>

int main() {
    int sideA, sideB, sideC;

    do {
        printf("Input triangle sides (> 0).\nInput A: ");
        scanf("%d", &sideA);
        printf("Input B: ");
        scanf("%d", &sideB);
        printf("Input C: ");
        scanf("%d", &sideC);
    } while (sideA <= 0 || sideB <= 0 || sideC <= 0);

    printf("Triangle(%d;%d;%d)\n", sideA, sideB, sideC);

    return 0;
}
