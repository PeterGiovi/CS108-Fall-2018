/*################################################
	Program to calculate monthly payment on a car
	Written by Peter Giovi		
	9/19/2018	
	v1.00			       
	Language: C
################################################*/

#include<stdio.h>
#include<math.h>

int main(void){
	double P = 0; double i = 0; double n = 0; // P is the loan size, i is the intrest rate, n is months.
	printf("How much are you borrowing?\t"); 
	scanf("%lf", &P);
	printf("How much intrest are you paying?\t"); 
	scanf("%lf", &i);
	printf("How many months will you pay it off in?\t"); 
	scanf("%lf", &n);
	double r = i/12;
	double m = (r*P)/(1-(pow(1+r, -n))); //computing the monthly payment
	printf("Monthly payment:\t%5.2lf", m);
	return 0;
}
