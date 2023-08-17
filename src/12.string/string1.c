#include <stdio.h>
#include <string.h>

int main()
{
  char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};

  char site2[] = "Hello";

  printf("教程：%s\n", site);

  printf("%s sizeof: [%d]\n", site2, sizeof(site2));

  printf("%s strlen: [%d]\n", site2, strlen(site2));

  return 0;
}