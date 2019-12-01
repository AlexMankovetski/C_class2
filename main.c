#include <stdio.h>
#include "myBank.h"

int main(){
char t;
do 
{  
	printf("\n\n wELCOME TO THE BANK \n"
	"O-> Open a new account \n"
	"B-> Check the current balance \n"
	"D-> Deposit money \n"
	"W-> withdraw money \n"
	"C-> close account \n"
	"I-> add interest to all the accounts \n"
	"P-> Presenting aii open accounts \n"
	"E-> To close all of the accounts and Exit \n \n" );

	
	if(scanf(" %1c",&t)==1)
	{
	switch(t)
		{
		case 'O':
		O();
		break;

	 	case 'B':
		B();
		break;
	
		case 'D':
	        D();
		break;
	
		case 'W':
		W();
		break;
		
		case 'C':
		C();
	        break;
	
	        case 'I':
		I();
		break; 
	       
		case 'P':
	        P();
	        break;
	
		case 'E':
		E();
		break;
	
		default :
		printf("Not legal transaction type, try again \n");
	        break;
		} 
	}
}while(t != 'E');  

return 0;
}
