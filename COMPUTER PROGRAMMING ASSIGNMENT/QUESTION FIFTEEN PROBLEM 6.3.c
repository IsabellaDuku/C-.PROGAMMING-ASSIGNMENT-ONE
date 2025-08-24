#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int  i = 1, j = 1, k = 1 ; 
for ( i = 1 ; i <= 3 ; i++ )   
 {
 for ( j = 1 ; j <= 3 ; j++ ) 
{ 
for ( k = 1 ; k <= 3 ; k++ ) 
printf ( "%d %d %d\n",  i , j , k ) ; 
} 
 }	
	return 0;
}
