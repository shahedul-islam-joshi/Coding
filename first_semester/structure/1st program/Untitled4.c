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

    // assigning string values
    strcpy(b1.title, "ANSI in C");
    strcpy(b1.author, "E. Balagurusamy");

    // assigning integer and float values
    b1.pages = 2000;
    b1.price = 2500.65;

    // Printing the values
    printf("The title of the book is: %s\n", b1.title);
    printf("The author of the book is: %s\n", b1.author);
    printf("The pages of the book are: %d\n", b1.pages);
    printf("The price of the book is: %.2f\n", b1.price);

    return 0;
}
