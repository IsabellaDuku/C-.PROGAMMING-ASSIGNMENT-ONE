#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
int  i, n = 1 ; 
printf ( "\nPrime numbers between 1 and 300 are :\n1\t" ) ; 
for ( n = 1 ; n <= 300 ; n++ ) 
 {
 i = 2 ;
 for ( i  = 2 ; i < n ; i++ ) 
{ 
if(n%i== 0 )
  break ; 
 } 
if ( i == n )
printf("%d\t",n ) ;   
 } 	
	return 0;
}
