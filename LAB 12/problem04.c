#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[50];
    char author[50];
    int publicationYear; // year > 0 and year <= 2024
} Book;

typedef struct {
    Book *books;
    int size;
} Library;

void inputBooks(Book *book){
    printf("Enter title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strcspn(book->title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strcspn(book->author, "\n")] = '\0';

    printf("Enter Publication Year: ");
    scanf("%d", &book->publicationYear);
    getchar();
}

int main(){
    Library lib;
    lib.size = 5; // 5 books for now

    lib.books = (Book *)malloc(lib.size * sizeof(Book));

    for (int i = 0; i < lib.size; i++){
        printf("Enter details for book %d:\n", i + 1);
        inputBooks(&lib.books[i]);
    }

    printf("Books published after the year 2000:\n");
    int count = 1;
    for (int i = 0; i < lib.size; i++) {
        if (lib.books[i].publicationYear > 2000) {
            printf("Book %d: %s\n", count, lib.books[i].title);
            count++;
        }
    }


    return 0;
}



