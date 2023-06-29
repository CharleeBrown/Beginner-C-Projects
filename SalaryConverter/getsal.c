#include <stdio.h>

int calc(int hours);
double yearToHour();
int main(){

	long double yearlySalary;
	long double hourlyRate;
	int res;
	int answer;

	
	printf("Select an Operation: \n 1. Yearly to Hourly \n 2. Hourly to Yearly \n");
	scanf("%d",&answer);

	switch(answer){
		case 1:
			yearToHour();
		case 2:
	}

		
}

int calc(int hours){
	int res = hours * 2;
	return res;
}

double yearToHour(){
	
	double salary; 
	
	printf("Enter your Yearly Salary \n$");
	scanf("%lf", &salary);
	double taxedSalary = salary * 0.735;
	double monthly = taxedSalary / 12;
	double biWeekly = monthly /2;
	double hourly = biWeekly / 80;
	printf("Your hourly rate is:\n $%.2lf \n", hourly);

}



