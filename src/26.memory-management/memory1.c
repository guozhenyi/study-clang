#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[100];
  char *desc;

  strcpy(name, "zara Ali");

  /* 动态分配内存 */
  desc = (char *)malloc(200 * sizeof(char));
  if (desc == NULL)
  {
    fprintf(stderr, "Error - unable to allocate required memory\n");
  }
  else
  {
    strcpy(desc, "zara ali a DPS student in class 10th");
  }

  printf("Name = %s\n", name);
  printf("Desc: %s\n", desc);
  printf("sizeof(desc): %d\n", sizeof(desc));
  printf("strlen(desc): %d\n", strlen(desc));

  return 0;
}