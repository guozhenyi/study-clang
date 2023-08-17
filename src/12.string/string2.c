#include <stdio.h>
#include <string.h>

int get_length(char str[])
{
  char *p = str;
  int count = 0;

  while(*p++ != '\0')
  {
    printf("[%p]\n", *p);

    count++;
  }

  // size_t str_count = sizeof(*str);
  // printf("sizeof(*str): %d\n", str_count);

  // for (size_t i = 0; i < str_count; i++)
  // {
  //   printf("[%s]", *(p+i));
  //   if (*(p+i) != '\0') {
  //     count++;
  //   }
  // }

  return count;
}


int main()
{
  char str1[20] = "runoob";
  char str2[14] = "google";
  char str3[14];
  int len;

  // 复制str1 到 str3
  strcpy(str3, str1);
  printf("strcpy(str3, str1): %s\n", str3);

  // 连接 str1 和 str2
  strcat(str1, str2);
  printf("strcat(str1, str2): %s\n", str1);

  // 连接后，str1的总长度
  len = strlen(str1);
  printf("strlen(str1): %d\n", len);
  printf("sizeof(str1): %d\n", sizeof(str1));
  printf("------\n");
  printf("get_length(str1): %d\n", get_length(str1));

  return 0;
}
