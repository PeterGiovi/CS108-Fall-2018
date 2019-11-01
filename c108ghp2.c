/*################################################
	Program to convert Fahrenheit into Celsius
	Written by Peter Giovi		
	9/14/2018	
	v1.00			       
	Language: C
################################################*/

#include<stdio.h>

int main(void){
	float f = 0; //input
	float c = 0; //output
	printf("Please input degrees in Fahrenheit:\t");
	scanf("%f", &f); //user inputs degrees in Fahrenheit
	c = f - 32; c = c / 1.8; //converting Fahremheit into Celsius
	printf("Did you know that %5.2f in Fahrenheit is also %5.2f in Celsius?", f, c); //print result to user
	return 0;
}
