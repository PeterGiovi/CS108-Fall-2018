/*##########################################################
	Define a struct to hold appropriate data elements. 
	Create fields that are appropriate to the object you are 
	dealing with. For example, if it is time, appropriate 
	fields (in 12-hour format) might be hours, minutes, 
	and ampm.

	Your program should use this template to create at 
	least one instance of the structure, query the user for 
	data to fill the fields, and output the contents. 
	The purpose of this program is to ensure that you 
	can create and access a struct.
	
	Written by Peter Giovi		
	12/03/2018	
	v1.00  
	Language: C (GCC Compiler Target)
##########################################################*/

#include <stdio.h>

struct stopwatch{
	int hour;
	int minute;
	int second;
};

int main(){
	struct stopwatch s;
	printf("Input time on a stopwatch using the following format: 00 00 00 (hours, minutes, seconds)\n");
	scanf("%i %i %i", &s.hour, &s.minute, &s.second);
	printf("%i %i %i\n", s.hour, s.minute, s.second);
}
