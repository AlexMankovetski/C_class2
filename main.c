#include <stdio.h>
#include "myMath.h"

int main(){

printf("Enter a number for the x : ");
double basis;
scanf("%lf",&basis);

printf("basis: %lf \n" ,basis);
float val_f1 = sub(add(Exp(basis),Pow(basis,3)),2);
printf("The value of the function f(x) = e^x + x^3 - 2 = %0.4lf\n",val_f1);
float val_f2 = add(mul(basis,3),mul(Pow(basis,2),2));
printf("The value of the function f(x) = 3x + 2x^2 = %0.4lf\n",val_f2);
float val_f3 = div(mul(Pow(basis,3),4),sub(5,mul(basis,2)));
printf("The value of the function f(x) = (4x^3)/(5-2x) = %0.4lf\n",val_f3);
return 0;
}
