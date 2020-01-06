// Purpose: Pick a random word from wordlist
#include <stdio.h>
#include <stdlib.h>

#define WORDLIST "wordlist/wordlist.dat"

// prototype
int counting_wordlist();
void read_wordlist_to_array();


int main(void) {
    FILE *fp;

    printf("Words in file: %d\n", counting_wordlist());

    read_wordlist_to_array();

    return 0;
}


/* Counting words from wordlist */
int counting_wordlist() {
    FILE *fp;
    int word = 1;   // last word will be end of file
    char c;

    fp = fopen(WORDLIST, "r");

    if (fp != NULL) {
        while(c != EOF) {
            c = getc(fp);
            if (c == '\n') {
                word++;
            }
        }
    }
    fclose(fp);
    return word;
}

/* Convert strings from wordlist into array */
void read_wordlist_to_array() {
    FILE *fp;
    size_t total_byte = 0;
    char *wordlist;
    char *word;
    char c;

    fp = fopen(WORDLIST, "r");
    // counting byte needed to allocate memory
    if(fp != NULL) {
        while(c != EOF) {
            c = getc(fp);
            if(c != '\n') {
                total_byte++;
            }
        }
    }

    printf("byte need: %ld\n", total_byte);

    wordlist = (char*) malloc(total_byte);

    fp = fopen(WORDLIST, "r");
    if(fp != NULL) {
        c = fgetc(fp);
        while(c != EOF) {
            printf("%c\n", c);
            c = fgetc(fp);
        }
    } else {
        printf("Failed\n");
    }


}