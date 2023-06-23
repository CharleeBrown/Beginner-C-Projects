#include <stdio.h>
#include <math.h>
#include <gtk/gtk.h>
int goes(int one, int two);



int main(){

	long int one;
	long int two;
	long int results;

	printf("Enter the first number \n");
	scanf("%ld", &one);
	printf("Enter the second number \n");
	scanf("%ld", &two);

	results = goes(one,two);
	printf("results: %ld \n ",results);
}
int goes(int one, int two){
	int result;
		result = one + two;
		return result;
}







