#include <stdio.h>

int main()
{
  int array[] = {3, 5, 2, 4, 1, 0};
  int len = sizeof(array) / sizeof(array[0]);

  /* 为啥可以用以上方法计算数组长度? */
  printf("sizeof(array): %d\n", sizeof(array));
  printf("sizeof(array[0]): %d\n", sizeof(array[0]));
  printf("len: %d\n", len);

  return 0;
}