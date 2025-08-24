#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int  i = 1, j ; 
float  fact, sum = 0.0 ; 
for ( i = 1 ; i <= 7 ; i++ ) 
 {
 fact = 1.0 ; 
for ( j = 1 ; j <= i ; j++ ) 
fact = fact * j ; 
sum = sum + i / fact ;
}
printf ( "Sum of series = %f\n", sum ) ;

	return 0;
}
