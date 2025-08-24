#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int  num, i, fact ; 
printf ( "Enter a number: " ) ; 
scanf ( "%d", &num ) ; 
fact = i = 1 ; 
while ( i <= num ) 
 {
 fact = fact * i ; 
i++;
 }
 printf ( "Factorial value of %d = %d\n", num, fact ) ;	
	return 0;
}
