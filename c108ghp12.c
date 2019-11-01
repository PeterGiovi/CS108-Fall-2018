/*##########################################################
	Write a program that utilizes a struct and linked list 
	to store employee information taken from the keyboard 
	(first name, last name, three digit employee id number). 
	The program should traverse the linked list and display 
	the information for the employee with the 
	highest id number.
	
	Written by Peter Giovi		
	12/10/2018	
	v3.55  
	Language: C (GCC Compiler Target)
##########################################################*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node { 
	int id;
	char first[20];
	char last[20];
	struct node *next;
};

char f[20];
char l[20];

struct node *head = NULL;
struct node *current = NULL;

void output() { //outputs data in linked list
	struct node *change = head;
	struct node *tempN = change;
	while(change != NULL) {        
		if(change->id > tempN->id)
			tempN = change;
		change = change->next;
	}
	printf("ID:\t %i\n", tempN->id);
	printf("Name:\t");
	puts(tempN->first);
	printf(" ");
	puts(tempN->last);
}

void cloneFirst(char *array){ //clones data
	for(int i = 0; i<strlen(f); i++){
		array[i] = f[i];
	}
}

void cloneLast(char *array){ //clones data
	for(int i = 0; i<strlen(l); i++){
		array[i] = l[i];
	}
}

void insert(int data) { //inserts a node into the linked list

	struct node *link = (struct node*) malloc(sizeof(struct node));
	link->id = data;
	cloneFirst(link->first);
	cloneLast(link->last);
	link->next = head;
	head = link;
}

int main() {
	printf("How Many Employees?\t");
	int n;
	scanf("%i", &n);

	for(int i = 0; i < n; i++){ //gets data for Employees and inserts it into the linked list
		int temp;
		printf("Employee id: ");
		scanf("%i", &temp);
		printf("First: ");
		gets(f);
		gets(f);
		printf("Last: ");
		gets(l);
		insert(temp);
	}
	output();
}
