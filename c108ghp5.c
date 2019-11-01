/*################################################
	This Program will encrypt and decrypt a
	message you input. It will also ask for a key
	to perform the encryption / decryption. The
	same key must be used both ways in order to
	get a readable message back. The encryption
	will be done using a basic ceasar cipher 
	encryption method for demonstrating repetition 
	without introducing to many new techniques that 
	have not yet been disgust in class.
	
	Written by Peter Giovi		
	10/6/2018	
	v1.0			       
	Language: C (GCC Compiler Target)
################################################*/

#include<stdio.h>

int f, key, l;

void encrypt(){ // will encrypt the input of a string
	printf("Please enter the length of your message including white space: ");
	scanf("%i", &l); char s[l];
	printf("Please enter your message:\n");
	scanf("%s", s);
	
	for(int i = 0; i < l; i++)
	{
		if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] + key;
		}
	}
	printf("%s", s);
}

void decrypt(){ //will decrypt the input of a string
	printf("Please enter the length of your message including white space: ");
	scanf("%i", &l); char s[l];
	printf("Please enter your message:\n");
	scanf("%s", s);
	
	for(int i = 0; i < l; i++)
	{
		if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - key;
		}
	}
	printf("%s", s);
}

int main(void)
{
	printf("Please input 1 for encrypt and 2 for decrypt: ");
	scanf("%i", &f);
	printf("Please input your key: "); //gets the key to be used for encryption/decryption
	scanf("%i", &key);
	if(f == 1) encrypt();
	else if(f == 2) decrypt();
	else printf("Error 01\n");
	return 0;
}
