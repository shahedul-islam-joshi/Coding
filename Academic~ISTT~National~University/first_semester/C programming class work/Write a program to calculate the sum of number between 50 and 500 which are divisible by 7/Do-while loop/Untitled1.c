#include <stdio.h>

int main() {
    int sum = 0, i = 50;

    do {
        if (i % 7 == 0) {
            sum += i;
        }
        i++;
    } while (i <= 500);

    printf("The sum is: %d\n", sum);

    return 0;
}

