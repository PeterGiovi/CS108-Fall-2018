/*##########################################################
	This Program Will: Create the plural of a inputed noun.
	
	Written by Peter Giovi		
	11/12/2018	
	v3.60  
	Language: C (GCC Compiler Target)
##########################################################*/

#include <stdio.h>
#include <string.h>


void p(char x[])
{
	int l;
	l = 1;
	l = strlen(x);
	if(x[l - 1] == 'y') 
	{  	 
		x[l - 1] = 'i';
		x[l] = 'e';
		x[l + 1] = 's';
		x[l + 2] = '\0';  
	}
	else if(x[l - 1] == 's' || (x[l - 2] == 'c' && x[l - 1] == 'h') || (x[l - 2] == 's' && x[l - 1] == 'h'))
		strcat(x, "es");
	else
		strcat(x, "s");
}

int main()
{ 
	char input[100]; 
	printf("Enter an input noun that is singular: ");
	scanf("%s", &input);
    p(input);
    printf("The plural form is %s\n", input);
}
