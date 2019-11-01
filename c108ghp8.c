/*##########################################################
	This Program Will: Verify a 12 digit UPC Code
	
	Written by Peter Giovi		
	11/7/2018	
	v2.00		       
	Language: C (GCC Compiler Target)
##########################################################*/

#include<stdio.h>

int main(){
	int upc[12];
	printf("Please enter upc code 1 number at a time\n");
	
	for(int i = 0; i < 12; i++){
		scanf("%i", &upc[i]);
	}
	
	int sum1 = ((upc[0] + upc[2] + upc[4] + upc[6] + upc[8] + upc[10]) * 3 ) + (upc[1] + upc[3] + upc[5] + upc[7] + upc[9]);
	printf("Total is %i\n", sum1);
	
	if(sum1 == 0)
	{
		if(upc[11] == 0)
			printf("Barcode is Valid!\n");
		else
			printf("Barcode is Invalid!\n");
	}
	else
	{
		int temp = sum1 % 10;
		temp = 10 - temp;
		
		if(upc[11] == temp)
			printf("Barcode is Valid!\n");
		else
			printf("Barcode is Invalid!\n");
	}
}
