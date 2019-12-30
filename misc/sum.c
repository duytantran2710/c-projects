#include <stdio.h>


int sum(int a, int b) {
	return a + b;
}

int main() {
	int a, b;

	char con;

	do {
		printf("SUM\n");
		printf("---\n");
		printf("Enter a number: ");
		scanf("%d", &a);
		printf("Enter another number: ");
		scanf("%d", &b);
		printf("\n");
		printf("Sum of %d and %d is %d\n", a, b, sum(a, b));

		printf("\n");
		printf("Continue (Y/N): ");
		scanf(" %c", &con);		// add a space before %c to prevent this scanf statement being skipped

		if(con == 'n' || con == 'N')
			break;

	} while(1);

	return 0;
}