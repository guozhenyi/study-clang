#include <stdio.h>
#include <string.h>

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* 函数声明 */
void printBook(struct Books book);

int main()
{
  struct Books book1;

  // book1 赋值
  strcpy(book1.title, "Clang");
  strcpy(book1.author, "K & R");
  strcpy(book1.subject, "C Programming Tutorial");
  book1.book_id = 111;

  // 把结构体作为参数
  printBook(book1);

  return 0;
}

void printBook(struct Books book)
{
  printf( "Book title : %s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id : %d\n", book.book_id);
}
