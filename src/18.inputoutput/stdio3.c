#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];

  // printf("Enter a value: ");
  // gets(str);

  // printf("\nYou entered: ");
  // puts(str);

  // printf("pointer:%p\n", str);
  // printf("pointer:%p\n", &str);
  // size_t p2 = &str;
  // printf("pointer: %x\n", p2);

  // 遍历字符串的字符
  char *p = str;
  int len = sizeof(str);

  for (int i = 0; i < len; i++)
  {
    printf("[%d:%u]\n", i, *(p + i));
  }

  return 0;
}