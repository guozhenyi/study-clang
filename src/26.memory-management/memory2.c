#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[100];
  char *desc;

  strcpy(name, "K & R");

  /* 动态分配内存 */
  desc = (char *)malloc(30 * sizeof(char));
  if (desc == NULL)
  {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  }
  else
  {
    strcpy(desc, "Zara boy a DPS student...");
  }

  /* 假设要存储更大的描述信息 */
  // desc = (char *)realloc(desc, 100 * sizeof(char));
  // if (desc == NULL)
  // {
  //   fprintf(stderr, "Error - unable to allocate required memory\n");
  // }
  // else
  // {
  strcat(desc, "She is in class 10th");
  // }

  printf("Name = %s\n", name);
  printf("Desc: %s\n", desc);
  // printf("sizeof(desc): %d\n", sizeof(desc));
  // printf("strlen(desc): %d\n", strlen(desc));

  /* 释放内存 */
  free(desc);

  return 0;
}