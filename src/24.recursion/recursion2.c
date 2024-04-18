#include <stdio.h>

/* 使用递归函数生成一个给定的数的斐波那契数列 */

int fibonaci(int i)
{
  if (i == 0)
  {
    return 0;
  }
  if (i == 1)
  {
    return 1;
  }
  return fibonaci(i - 1) + fibonaci(i - 2);
}

int main()
{
  int i;
  for (i = 0; i < 13; i++)
  {
    printf("%d 斐波那契数列是 %d\n", i, fibonaci(i));
  }
  return 0;
}
