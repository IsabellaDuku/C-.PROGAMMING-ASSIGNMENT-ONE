#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float  a, b, c, sp, area ; 
printf ( "\nEnter sides of a triangle: " ) ; 
scanf ( "%f %f %f", &a, &b, &c ) ; 
sp = ( a + b + c ) / 2 ; 
area = sqrt ( sp * ( sp - a ) * ( sp - b ) * ( sp - c ) ) ; 
printf ( "Area of triangle = %f\n", area ) ; 	
	return 0;
}
