#include <stdio.h>
#include "myBank.h"

int current_size=0;
int size=50;
double bank[3][50];
double wAmount, dAmount;
int acc_num;


void O(){
if(current_size<size){
acc_num = 901 + current_size;
bank[0][current_size]=acc_num;
bank[2][current_size]=1;
printf("Congratulations you have opened a new account %d :\n", acc_num);
printf("how much to deposit?");
scanf("%lf", &dAmount);
	while(dAmount<0){
	printf("You can not deposit a negative amount of money, try again\n");
	scanf("%lf",&dAmount);
	}
	if(dAmount>0)
	{
	bank[1][current_size]=dAmount;
	printf("The current balance is %0.2lf\n",bank[1][current_size]);
	current_size++;
	}
}
else
{
printf("The bank is full and can not open new accounts\n");
}
}

void B(){
printf("For which account would you like to see the balance?");
scanf("%d",&acc_num);
int i=0;
while(bank[0][i]!=acc_num){
i++;
}
if(bank[2][i]==1){
printf("For the account number %d : ",(int)bank[0][i]);
printf("The current balance is : %0.2lf\n",bank[1][i]);
}
else{
printf("This account number is close\n");
}
}

void D(){
printf("For which account would you like to deposit? ");
scanf("%d",&acc_num);
int i=0;
while(bank[0][i]!=acc_num){
i++;
}
printf("how much to deposit? ");
scanf("%lf", &dAmount);
	while(dAmount<0){
	printf("You can not deposit a negative amount of money, try again\n");
	scanf("%lf",&dAmount);
	}
	if(dAmount>0 && bank[2][i]==1)
	{
	double beforeDeposit = bank[1][i];
	bank[1][i] = beforeDeposit + dAmount;
	double afterDeposit = bank[1][i];
	printf("The current balance is : %0.2lf\n",afterDeposit);
	}
	
	else{
	printf("This account number is close\n");
	}
}

void W(){
printf("Form which account would you like to withdraw? ");
scanf("%d",&acc_num);
int i=0;
while(bank[0][i]!=acc_num){
i++;
}
printf("Account number %d : ",(int)bank[0][i]);
if(bank[2][i]==0){
printf("This account is closed\n");
return;
}
if(bank[1][i]==0){
	printf("This account is empty you can't withdraw from this account\n");
	return;
	}
else	
	{
	printf("How much would you like to withdraw?\n ");
	scanf("%lf",&wAmount);
	while(wAmount>bank[1][i] || wAmount<0){
	printf("You can not withdraw this amount of money from your account , 		try a different amount\n");
	scanf("%lf",&wAmount);
	}
	double beforeW = bank[1][i];
	bank[1][i] = beforeW - wAmount;
	double afterW = bank[1][i];
	printf("The current balance is : %0.2lf\n",afterW);
	}
}

void C(){
printf("which account would you like to close?");
scanf("%d",&acc_num);
int i=0;
while(bank[0][i]!=acc_num){
i++;
}
if(bank[2][i]==1){
	bank[2][i]=0;
	printf("Account number: %d, is closed\n",acc_num);
}
else{
	printf("This account is already close\n");
}
}

void I(){
printf("Add iterest rate");
double rate;
scanf("%lf",&rate);
for(int i=0;i<current_size;i++){
	if(bank[2][i]==1){
	   bank[1][i]= bank[1][i]*((100+rate)/100);
	}
}
}

void P(){
for(int i=0;i<size;i++){
	if(bank[2][i]==1){
	   printf("Account number: %d ",(int)(bank[0][i]) );
	   printf("Balance: %lf",bank[1][i] );
           printf("\n");
	}
}
return;
}
void E(){
for(int i=0;i<size;i++){
	bank[2][i]=0;
}
	printf("Thank you for visiting our bank have a good day");
	return;
}

