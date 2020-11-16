#include <stdio.h>
#include <unistd.h>

int main() {
    // int secondsLeft = 10;

    // while (secondsLeft > 0) {
    //     printf("It's %d second(s) left ...\n", secondsLeft);
    //     sleep(1);
    //     secondsLeft--;
    // }
    //
    //

    // for (int secondsLeft = 10; secondsLeft > 0; secondsLeft--) {
    //     printf("It's %d second(s) left ...\n", secondsLeft);
    //     sleep(1);
    // }

    int i = 0;
    do {
        printf("Counting up to 10: %d\n", i);
        i++;
    } while(i <= 10);

    printf("Something has happened\n");
    return 0;
}
