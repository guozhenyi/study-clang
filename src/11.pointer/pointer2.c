#include <stdio.h>

int main()
{
  int va = 20;
  int *ptr;

  ptr = &va;

  printf("va变量的地址: %p \n", &va);

  printf("ptr变量存储的地址: %p \n", ptr);

  printf("ptr 变量的值: %d \n", *ptr);

  return 0;
}