#include <stdio.h>
#include <string.h>

int main(){
	char test[30];
	printf("Enter a string\n ");
	scanf("%s",test);
	int len = strlen(test);
	printf("The word %s", test);
	printf(" is %d characters long \n", len);
}
