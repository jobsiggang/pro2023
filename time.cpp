#include <stdio.h>
#include <time.h>

int main() {
  time_t seconds;

  seconds = time(NULL);
  printf("%ld hours since January 1, 1970 \n", seconds/360 );
  

  return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("First number: %d\n", rand() % 100);
  srand(time(NULL));
  printf("Random number: %d\n", rand() % 100);
  srand(1);
  printf("Again the first number: %d\n", rand() % 100);

  return 0;
}*

