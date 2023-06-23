#include <stdio.h>

int main(){
	long int subOne;
	long int subTwo;
	long int result;

	
	printf("Enter the first Number: \n");
	scanf("%ld", &subOne);

	printf("Enter the second Number: \n");
	scanf("%ld", &subTwo);

	result = subOne - subTwo;
	printf("Results: %ld \n", result);
}

	
