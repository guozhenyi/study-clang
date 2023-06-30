#include <stdio.h>
#include <limits.h>

int main() {
  printf("int 存储大小 : %lu \n", sizeof(int));

  return 0;
}

// 编译
// 中文会乱码，加选项 -fexec-charset=gbk
// gcc -fexec-charset=gbk main.c -o a.exe


