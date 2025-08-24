#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {int  year ; 


printf ( "\nEnter year: " ) ; 
scanf ( "%d", &year ) ; 
if ( year % 400 == 0 || year % 100 != 0 && year % 4 == 0 ) 
printf ( "Leap year\n" ) ; 
 else
 printf ( "Not a leap year\n" ) ;
	
	
	return 0;
}
