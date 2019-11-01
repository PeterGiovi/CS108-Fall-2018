/*################################################
	This Program calculates BMI and sorts it.
	Written by Peter Giovi		
	10/3/2018	
	v2.00			       
	Language: C (GCC Compiler Target)
################################################*/
#include<stdio.h>
#include<math.h>

int main(){
	float w, h, bmi; 
	
	printf("This Program will calculate your BMI and sort you\n");
	printf("Please input your weight in pounds: ");
	scanf("%f", &w);
	printf("Please input your height in inches: ");
	scanf("%f", &h);
	
	bmi = (703*w)/(pow(h,2)); //calculates BMI
	
	if(bmi <= 18.5) //prints the clasification of the calculated BMI
		printf("You have a BMI of %5.1f, making you Underweight\n", bmi);
	else if(bmi <= 25)
		printf("You have a BMI of %5.1f, making you Normal\n", bmi);
	else if(bmi <= 30)
		printf("You have a BMI of %5.1f, making you Overweight\n", bmi);
	else
		printf("You have a BMI of %5.1f, making you Obese\n", bmi);
	return (0);
}
