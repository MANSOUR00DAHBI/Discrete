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
 // a / 5 = 2 
int main() {
	  int Number = 0;
      int positivenmber =
	  UnviversalConditionalStatements(Number);
 
		printf(" positive Number %d \n",positivenmber);
		printf(" integer is 27 that a remainder %d when it is divided by 5 and remainder of %d when it is divided by 6 \n",
			(27 % 5), (27 % 6));
     
	   int a[3] = {25,10,2}, b[3]={3,4,7};
	   int sets[3] ;
	  for (int i = 0 ;i <= 2 ; ++i ) {
		  //for (int j = 0;j < 2;++j) {
			   sets[3] = {a[i],b[i], a[i] + b[i]};
			 
			  printf(" a[%d] : %d  set[%d] :%d\n",i,a[i],i,sets[i]);
		  //}
	  }
	return 0;
}
/*
0724422529
 mlak 

*/