#include <stdio.h>
#include <string.h>

typedef struct Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} Book;

int main()
{
  Book book;

  strcpy(book.title, "C tutorial");
  strcpy(book.author, "K & R");
  strcpy(book.subject, "Program language");
  book.book_id = 123;

  printf("书标题: %s\n", book.title);
  printf("书标题: %d\n", book.book_id);

  return 0;
}