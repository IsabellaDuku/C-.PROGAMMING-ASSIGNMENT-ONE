#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, power ; 
int  y, i ; 
printf ( "\nEnter two numbers: " ) ; 
scanf ( "%f %d", &x, &y ) ; 
power = i = 1 ; 
while ( i <= y ) 
 {
 power = power * x ; 
i++;
 }
 printf ( "%f to the power %d is %f\n", x, y, power ); 
	return 0;
}
