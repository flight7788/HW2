#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate;
	int year;
	int RATE;
	

	for (RATE = 0; RATE <= 20; RATE=RATE + 5)
	{
		rate = (double)(10 + RATE*0.1);
		printf("Rate: %.1f", rate);
		puts("%");
		printf("%4s%21s\n", "Year", "Amount on deposit");
		rate = (double)rate*0.01;
		for (year = 1; year <= 15; ++year)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		printf("\n");
	}
	system("pause");
	return 0;
	
}