#include<stdio.h>
#include<math.h>
#include <stdlib.h>


int main(){
	long int divOne;
	long int divTwo;
	double result;

	printf("Enter the first number \n");
	scanf("%ld", &divOne);
	printf("Enter the dviding number \n");
	scanf("%ld", &divTwo);
	result = (double)divOne/(double)divTwo;
	printf("Results : %.3f \n", result);
}
