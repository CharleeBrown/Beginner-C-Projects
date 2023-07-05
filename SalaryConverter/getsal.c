#include <stdio.h>
#include <locale.h>

int calc(int hours);
void yearToHour();
void hourToYear();
int main(){

	long double yearlySalary;
	long double hourlyRate;
	int res;
	int answer = 4;

	while(answer !=3){
		printf("Select an Operation: \n 1. Yearly to Hourly \n 2. Hourly to Yearly \n 3. Exit\n");
		scanf("%d",&answer);
	
		switch(answer){
			case 1:
				yearToHour();
				break;
			case 2:
				hourToYear();
				break;
		}	
	}
}

int calc(int hours){
	int res = hours * 2;
	return res;
}

void yearToHour(){
	setlocale(LC_NUMERIC,"");
	double salary; 
	
	printf("Enter your Yearly Salary \n$");
	scanf("%lf", &salary);
	double taxed = salary * 0.735;
	double monthly = taxed / 12;
	double biWeekly = monthly /2;
	double hourly = biWeekly / 80;
	double unTax = taxed /0.735;
	double unTaxTotal = ((unTax /12)/2)/80;
	printf("Your hourly rate PRE TAX is $%'.2lf \n", unTaxTotal);
	printf("Your hourly rate POST TAX is: $%'.2lf \n", hourly);

}

void hourToYear(){
	double hourly;
	const float taxAmt = 0.735;
	printf("Enter your Hourly Rate \n$");
	scanf("%lf", &hourly);

	double paycheck = hourly * 80;
	double monthly = paycheck * 2;
	double yearly = monthly * 12;
	double taxedYear = yearly * taxAmt;
	
	printf("\nYour gross yearly: $%'.2lf \n", yearly);
	printf("Your taxed yearly: $%'.2lf \n",taxedYear);
}



