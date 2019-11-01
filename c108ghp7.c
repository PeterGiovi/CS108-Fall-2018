/*##########################################################
	
Write a program using nested loops that demonstrates the 
problem of representational error. For each fraction from 
1/2 to 1/30 (1/2, 1/3, 1/4...1/30), add up n copies of 
1/n and then compare the sum to 1. If the sum is equal to 1,
display the result something like:

Adding 2 1/2's gives a result of 1.
If not, display either:
Adding 2 1/2's gives a result less than 1
or
Adding 2 1/2's gives a result greater than 1

Use nested loops - an outer loop that counts from 2 to 30 
and an inner loop that adds up 1/2 + 1/2 on the first 
iteration, 1/3+1/3+1/3 on the second iteration,
1/4+1/4+1/4+1/4 on the third iteration, and so on.

	Written by Peter Giovi		
	11/2/2018	
	v3.75			       
	Language: C (GCC Compiler Target)
##########################################################*/

#include<stdio.h>

int main(void){
	for(double i = 2; i <= 30; i++){ //outer loop (counts iteration from 2 - 30)
		double result = 0;
		for(double j = 0; j < i; j++){ //inner loop that adds the fractions
			result = result + (1 / i);
			//printf("%f\t result = %f *** INNER LOOP\n", i, result); //Testing Purposes Only
		}
		//printf("%f\t value = %f ***OUTER LOOP END CYCLE\n", i, result); //Testing Purposes only
		if(result == 1)
			printf("Adding %2.0f 1/%2.0f's gives a result of 1\n", i, i);
		else if(result < 1)
			printf("Adding %2.0f 1/%2.0f's gives a result less than 1\n", i, i);
		else
			printf("Adding %2.0f 1/%2.0f's gives a result greater than 1\n", i , i);
	}
}
