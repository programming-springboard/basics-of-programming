#include <stdio.h>

int main() {
    int a = 1;
    int *pointerA = &a;
    printf("Address of variable 'a': %p\n", pointerA);
    printf("Value of variable 'a': %d\n", *pointerA);
    return 0;
}
