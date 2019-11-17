#include "myMath.h"
#include <stdio.h>

double Exp(int x){
double exp = 2.718281;
return Pow(exp , x);
}
double Pow(double x , int y){
double sum = 1;
while(y!=0){
sum = sum*x;
y--;
}
return sum;
}
