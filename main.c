#include <stdio.h>
#include "myMath.h"

int main(){

double basis;
scanf("Enter a number for the basis >%lf ", &basis );


double p = Pow(basis,3);
printf("pow: %0.4lf \n",p);
double e = Exp(basis);
printf("Exp: %0.4lf \n",e);
float a = add(e,p);
printf("add: %0.4lf \n",a);
float s = sub(a , 2);
printf("sub: %0.4lf \n", s);

float val_f1 = sub(add(Exp(basis),Pow(basis,3)),2);
printf("The value of the function f(x) = e^x + x^3 - 2 = %0.4lf\n",val_f1);
float val_f2 = add(mul(basis,3),mul(Pow(basis,2),2));
printf("The value of the function f(x) = 3x + 2x^2 = %0.4lf\n",val_f2);
float val_f3 = div(mul(Pow(basis,3),4),sub(5,mul(basis,2)));
printf("The value of the function f(x) = (4x^3)/(5-2x) = %0.4lf\n",val_f3);
return 0;
}
