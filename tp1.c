#include<stdio.h>
#define cnv 71.3
int main(){

float inr, usd;

printf("please enter amount to be converted \n");
scanf("%f", &inr);

usd = inr * cnv;

printf("The converted value is %7.2f \n", usd);

return 0;

}
