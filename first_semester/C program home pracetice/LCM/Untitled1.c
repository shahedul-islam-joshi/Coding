#include <stdio.h>

int main() {
    int arr[100], n, i, k ;
    int max;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input integers into the array
    printf("Enter %d integers numbers: ", n);
    for (i = 0; i < n; i++) {
        printf("\nNumber [%d]= ", i + 1);
        scanf("%d", &arr[i]);
    }



    max=arr[0];

       for (i=0;i<n;++i)
       {
           if (arr[i]>max)
            max=arr[i];
            else
            max=max;
       }

     printf ("\n%d is the max number",max);

     k=max;
      printf ("\n%d is assigned to variable k\n", k);

    // Find the LCD of the numbers in the array
    for (i = 0; i < n; i++) {
        while (k % arr[i] != 0) {
            k++;
            i=-1;   //Reset i to 0 to recheck divisibility of all elements
        }
    }

    printf("The least common multiple (LCM) of the array is %d\n", k);

    return 0;
}
