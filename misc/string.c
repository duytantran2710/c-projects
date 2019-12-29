#include <stdio.h>
#include <string.h>


char *foo() {
    char * s;
    s = "hello";
    return s;
}

int main(void) {
  char *s = "Hello world";

  printf("%s\n", s);

  printf("%s\n", foo());

  printf("%zu\n", strlen("Hello"));

  return 0;
}
