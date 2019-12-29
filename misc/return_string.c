// file: return_string.c
// desc: Return a string from a function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_secret(unsigned int code);

int main(void) {

  unsigned int code;
  char *secret;


  printf("CODE? ");
  scanf("&d", &code);

  secret = get_secret(code);
  printf("Your secret is \"%s\"\n", secret);

  free(secret);

  return 0;
}

char *get_secret(unsigned int code) {


  char *temp = "";

  if(code == 7849) {
    strcpy(temp, "CONSUMER\0");
  } else if (code == 1337) {
    strcpy(temp, "GRIP\0");
  } else if (code == 2648) {
    strcpy(temp, "SAMPLE\0");
  }

  char *secret;
  secret = (char *) malloc(strlen(temp) + 1); // allocate a block of memory with the size of "temp", NOT pointing temp to secret

  // debug
  printf("value of temp: %s\n", temp);
  printf("&temp: 0x%X\n", &temp);
  printf("value of secret: 0x%X\n", *secret);

  printf("length of temp: %zu\n", strlen(temp));
  printf("length of secret: %zu\n", strlen(secret));

  if(secret == NULL) {
    printf("Error: malloc failed to allocate memory.\n");
    exit(EXIT_FAILURE);
  }

  strcpy(secret, temp);
  return secret;
}
