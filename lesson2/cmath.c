#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Input a: ");
    scanf("%d", &a);

    double powA10 = pow(a, 10.0); // double powA10 = 1024.00000;
    int integerPowA10 = (int)powA10;

    printf("a ^ 10 = %d\n", (int)powA10);

    double sqrtA = sqrt(a);

    printf(" a ^ 1/2 = %f\n", sqrtA);
    return 0;
}
