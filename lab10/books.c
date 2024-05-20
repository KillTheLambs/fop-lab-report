#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

void initializeBook(struct Book *book);
void printBookDetails(struct Book book);

int main()
{

    struct Book book1;

    initializeBook(&book1);
    printf("\n----------------------------------------------------\n\n");
    printBookDetails(book1);
    printf("\n----------------------------------------------------\n\n");

    return 0;
}

void initializeBook(struct Book *book)
{
    printf("Enter the title of the book: ");
    fgets(book->title, 50, stdin);
    printf("Enter the author of the book: ");
    fgets(book->author, 50, stdin);
    printf("Enter the price of the book: ");
    scanf("%f", &book->price);
    getchar(); //
}

void printBookDetails(struct Book book)
{
    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("Price: %.2f\n", book.price);
}