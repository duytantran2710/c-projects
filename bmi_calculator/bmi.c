#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define CLRSCR system("@cls || clear");

int main(void) {

	int unit_choice;
	char continue_choice;

	CLRSCR

	printf("BMI Calculator\n");
	printf("---\n");	

	while(TRUE) {
		printf(" 1. Imperial Unit\n");
		printf(" 2. Metric Unit\n");
		printf("\n");
		printf("Select: ");
		scanf(" %d", &unit_choice);

		// continue or exit
		printf("Continue? (please enter y or n) ");
		scanf(" %c", &continue_choice);

		if(continue_choice == 'n' || continue_choice == 'N')
			break;
	};

	//CLRSCR
	return 0;
}