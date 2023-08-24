#include <stdio.h>

struct Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} book = {"Clang", "K & R", "Program Language", 123};

int main()
{
  printf("title: %s\n", book.title);
  printf("author: %s\n", book.author);
  printf("subject: %s\n", book.subject);
  printf("book_id: %d\n", book.book_id);

  return 0;
}