// file: return_string.c
// desc: Return a string from a function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_secret(int code);

int main(void) {

  int code;
  char *secret;


  printf("CODE? ");
  scanf("%d", &code);

  secret = get_secret(code);
  printf("Your secret is \"%s\"\n", secret);

  return 0;
}

char *get_secret(int code) {
  char *secret;

  if (code == 7849) {
    secret = "CONSUMER";
  } else if (code == 1337) {
    secret = "GRIP";
  } else if (code == 2648) {
    secret = "SAMPLE";
  } else {
    secret = "***********";
  }

  return secret;
}
