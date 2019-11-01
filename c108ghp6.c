/*##########################################################
	This Program Will: Repeatedly query the user 
	for positive integer and determine the following 
	for each value:
	
	a. Is the value a multiple of 7, 11, or 13? (Yes or No)
	b. Is the sum of the digits of the integer even or odd?
	c. Is the value a prime number? (Yes or No) 
	
	Written by Peter Giovi		
	10/6/2018
	v2.20	       
	Language: C (GCC Compiler Target)
##########################################################*/

#include<stdio.h>

int c = 1, input, p = 0;

void calc(int x, int a[]){ //will calculate all the requested checks for the assignment
		
		if(x%7 == 0)
			a[0] = 1;
		else if(x%11 == 0)
			a[0] = 1;
		else if(x%13 == 0)
			a[0] = 1;
		else
			a[0] = 0;
//
		int temp, sum = 0, r;
		temp = x;
		while (temp != 0)
		{
			r = temp % 10;
			sum = sum + r;
			temp = temp / 10;
		}
		
		if(sum % 2 == 0)
			a[1] = 1; //1 == even
		else
			a[1] = 0; //0 == odd
//
		int check = 1;
		if ((x <= 1) && check == 1) {
			a[2] = 0;
			check--;
		}
		if ((x % 2 == 0 && x > 2) && check == 1) {
			a[2] = 0;
			check--;
		}
		for(int i = 3; i < x / 2; i+= 2)
		{
			if ((x % i == 0) && check == 1){
				a[2] = 0;
				check--;
			}
		}
		if(check == 1)
		a[2] = 1;
}

int main(){
	
	while(c==1){
		printf("Insert an integer: ");
		scanf("%i", &input);
		int r[3];
		
		calc(input, r); //runs the calculation function
		
		if(r[0] == 1)
			printf("%i is a multiple of 7, 11, or 13\n", input);
		else
			printf("%i is not a multiple of 7, 11, or 13\n", input);
		
		if(r[1] == 1)
			printf("The sum of %i's digits are even\n", input);
		else
			printf("The sum of %i's digits are odd\n", input);
		
		if(r[2] == 1)
			printf("%i is a prime number\n", input);
		else
			printf("%i is not a prime number\n", input);
		
		printf("Continue? \n[1] = Yes\n[2] = No\n");
		scanf("%i", &c);
	}
}
