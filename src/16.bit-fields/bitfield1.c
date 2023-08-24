#include <stdio.h>
#include <string.h>

struct
{
  unsigned int isMale;
  unsigned int isFemale;
} status1;

struct
{
  unsigned int isMale : 1;
  unsigned int isFemale : 1;
} status2;

int main()
{
  printf("Memory size occupied by status1 : %d\n", sizeof(status1));
  printf("Memory size occupied by status2 : %d\n", sizeof(status2));

  return 0;
}