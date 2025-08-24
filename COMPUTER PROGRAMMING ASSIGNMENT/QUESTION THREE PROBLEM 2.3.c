#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {int amount, nohun, nofifty, noten, nofive, notwo, noone, total ; 
printf ( "Enter the amount: " ) ; 
scanf ( "%d", &amount ) ; 
nohun = amount / 100 ; 
amount = amount % 100 ; 
nofifty = amount / 50 ; 
amount = amount % 50 ; 
noten = amount / 10 ; 
amount = amount % 10 ; 
nofive = amount / 5 ; 
amount = amount % 5 ; 
notwo = amount / 2 ; 
amount = amount % 2 ; 
noone = amount / 1 ; 
amount = amount % 1 ; 
total = nohun + nofifty + noten + nofive + notwo + noone ; 
printf ( "Smallest number of notes = %d\n", total ) ;
 	
	return 0;
}
