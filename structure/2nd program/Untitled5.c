#include <stdio.h>
#include <string.h>

int main() {
    struct book_bank {
        char title[50];
        char author[50];
        int pages;
        float price;
    };

    struct book_bank b1, b2, b3;


    printf ("Enter book title: ");
    gets (b1.title);

    printf ("Enter the author of the book: ");
    gets (b1.author);

    printf ("Enter total pages of the books: ");
    scanf ("%d", &b1.pages);

    printf ("Enter the price: ");
    scanf ("%f", &b1.price);


    printf("The title of the book is: %s\n", b1.title);
    printf("The author of the book is: %s\n", b1.author);
    printf("The pages of the book are: %d\n", b1.pages);
    printf("The price of the book is: %.2f\n", b1.price);

    return 0;
}
