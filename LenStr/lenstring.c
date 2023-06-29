#include <stdio.h>
#include <string.h>

int main(){
	char test[400];
	printf("Enter a string\n ");
	scanf("%s",test);
	int len = strlen(test);
	printf("The word \n\n %s \n\n", test);
	printf("is %d characters long \n", len);
}
