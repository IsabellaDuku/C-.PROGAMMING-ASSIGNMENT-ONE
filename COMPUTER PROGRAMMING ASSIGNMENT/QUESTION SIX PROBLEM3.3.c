#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int  yr ; 
printf ( "\nEnter a year: " ) ; 
scanf ( "%d", &yr ) ; 
if ( yr % 100 == 0 ) 
 {                                    
if ( yr % 400 == 0 ) 
printf ( "Leap year\n" ) ; 
else
printf ( "Not a Leap year\n" ) ; 
 }
 else
 {
 if ( yr % 4 == 0 ) 
printf ( "Leap year\n" ) ; 
else 
printf ( "Not a leap year\n" ) ;
	return 0;
	}
}
