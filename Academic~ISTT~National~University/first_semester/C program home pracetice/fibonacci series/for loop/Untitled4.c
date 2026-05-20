#include <stdio.h>

int main()


{
    int epic = 0, binary = 1, n, Joshi, count = 0;

    printf("Enter range: ");
    scanf("%d", &n);


    printf("Fibonacci series:\n");

    for (count = 0; count < n; count++)

        {
        if (count <= 1)
            Joshi = count;
        else

        {
            Joshi = epic + binary;
            epic = binary;
            binary = Joshi;
        }

        printf("\n  \t%d\n\t", Joshi);
    }

    return 0;
}
