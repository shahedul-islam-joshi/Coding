#include <stdio.h>

int main() {
    int *ptr, x[10], n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Error: n should not exceed 10.\n");
        return 1;
    }

    ptr = x;  // pointer initialization by pointer base address

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr);
        sum = sum + *ptr;
        ptr++;
    }

    // Set ptr to the last element in the array
    ptr--;

    printf("Elements in reverse order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

    printf("Sum = %d\n", sum);

    return 0;
}
