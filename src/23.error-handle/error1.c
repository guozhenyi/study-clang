#include <stdio.h>
#include <errno.h>
#include <string.h>

// extern int errno;

int main()
{
  FILE *fp;
  int errnum;

  fp = fopen("abc.txt", "r");
  if (fp == NULL)
  {
    errnum = errno;
    fprintf(stderr, "错误号: %d\n", errno);
    perror("通过 perror 输出错误");
    fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
  }
  else
  {
    fclose(fp);
  }

  return 0;
}