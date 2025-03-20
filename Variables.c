/* Discrete The Mathematics With Appilcations */


/* Variables */

 /*
  A universal statement :
  says that a certain property is true for all elements in a set.
  (For example: All positive numbers are greater than zero.)
  *****************************************************************************
   A conditional statement :
   says that if one thing is true then some other thing also has to be true.
  (For example: [f 378 is divisible by 18, then 378 is divisible by 6.)
  *****************************************************************************
  existential statement :
  Given a property that may or may not be true,
  an existential statement says that there is at least one thing for which the property is true.
  (For example: There is a prime number that is even.) 

*/

#include <stdio.h>

int UnviversalConditionalStatements(int Number) {
	
	printf(" Entre Number : ");
    scanf("%d",&Number);
	if (Number > 0 ) {
       printf(" this %3d is positive bycase greater than Ziro\n", Number);
		return Number ; 
	}
	else{
		printf(" this %3d is not positive bycase less than Ziro\n", Number);
		return -1;
	}
}
int main() {
	  int Number = 0;
      int positivenmber =
	  UnviversalConditionalStatements(Number);
 
		printf(" positive Number %d \n",positivenmber);
		
	return 0;
}