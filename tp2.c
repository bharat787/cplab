#include<stdio.h>

int main(){

char a = 'b';
int b = 5;
float c = 5.0000;
char d[] = "bharat";

printf(" %c, %d, %f \n", a, b, c);
printf(" %-20s\n", d);
printf(" %-20.5s\n", d);
printf(" %-20.4s\n", d);
printf(" %-20.3s\n", d);
printf(" %-20.2s\n", d);
printf(" %-20.1s\n", d);
printf(" %1.3s\n", d);
printf(" %014d, %03d\n", b, b);
return 0;

}
