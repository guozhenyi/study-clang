#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 要生成和返回随机数的函数
int * getRandom()
{
  static int r[10];
  int i;
  // 设置种子
  srand((unsigned)time(NULL));
  for (i = 0; i < 10; i++)
  {
    r[i] = rand();
    printf("%d\n", r[i]);
  }
  return r;
}

int main()
{
  int *p;
  int i;

  p = getRandom();
  for ( i = 0; i < 10; i++)
  {
    printf("*(p + [%d]) : %d\n", i, *(p + i));
  }

  return 0;
}
