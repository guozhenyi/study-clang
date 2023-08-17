#include <stdio.h>

int main()
{
  int va = 10;
  int *p;
  p = &va;

  printf("va 变量的内存地址：%p \n", p);

  return 0;
}