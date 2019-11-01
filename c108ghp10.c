/*##########################################################
	Write a program that queries the user for an integer 
	value and uses a recursive

	function that returns the value of the following 
	recursive definition:

	f(x) =x+3 if x <=0
	f(x)=f(x-3)+(x+5) otherwise
	
	Written by: Peter Giovi
	Written on 12/01/2018	
	v2.00  
	Language: C (GCC Compiler Target)
##########################################################*/

#include<stdio.h>
#include<stdlib.h>

int recursive(int x){
	if(x <= 0) // '>' changed to a '<' by Ron Sarner
		return((x + 3)); //removed recursive call and moved it to line 29 by Ron Sarner
	else
		return(recursive(x - 3) + (x + 5)); //relocated recursive call from line 27 by Ron Sarner
}

int main(){
	printf("Input an integer: ");
	int n; scanf("%i", &n);
	printf("%i", recursive(n));
}
