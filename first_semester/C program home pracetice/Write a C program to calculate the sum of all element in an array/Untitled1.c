#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
//declare array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
//enter elements for array
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
            printf ("array[%d]= ",i);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf ("\nElements in the array:\n");
    for (i = 0; i < n; i++)
    {
        printf ("%d ",arr[i]);
    }

    printf("\nSum of all elements in the array is: %d\n", sum);

    return 0;
}
