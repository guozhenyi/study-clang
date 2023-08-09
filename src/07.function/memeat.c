#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h>
// #include <windows.h>

#ifdef _WIN32
  #include <windows.h>
#else
  #include <unistd.h>
#endif

void v_sleep(int ms)
{
  #ifdef _WIN32
    Sleep(ms);
  #else
    usleep(ms * 1000);
  #endif
}


int main()
{
  int num = 0;

  while(num++ < 10) {
    void *p = malloc(1024 * 1024 * 1024);

    printf("p is %d \n", p);

    v_sleep(5000);
  }

  return 0;
}

