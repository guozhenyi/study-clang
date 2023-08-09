#include <stdio.h>
#include <assert.h>

int main()
{

  int arr[5] = {10, 20, 30, 33, 50};

  int *ptr1 = arr;
  int *ptr2 = &arr[0];

  printf("arr pointer value: %d\n", ptr1);
  printf("arr first value pointer value: %d\n", ptr2);

  // 断言
  assert(ptr1 == ptr2);

  return 0;
}
