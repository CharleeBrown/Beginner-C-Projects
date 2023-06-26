#include <stdio.h>


int main(){
	
	char yourname[100];
	
	printf("Please enter your name. \n");

	scanf("%s", yourname);

	printf("Hi, %s \n", &yourname);
}


