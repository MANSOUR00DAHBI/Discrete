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


int main() {
      float R[2]={-1,-1}  ;
      float sum_RR[4] ={0};
      for (size_t i = 0; i < 2; ++i) {
        sum_RR[i] = R[i] * R[0];
        sum_RR[i + 2] = R[i] * R[1];
  
      }

      for (size_t i = 0; i < 4; ++i) {

          printf("|Sum R*R[%zu] : %f \n", i + 1, sum_RR[i]);
      }
     for (float j = -3; j < 4; ++j) {
         for (float i = -4; i < 5; ++i) {
            if ( i == 0 && j == 0 )
                printf("0 ");
            else if(R[0]==j && R[1]==i)
            printf("* ");


             else 
            printf(". ");

         }
            printf("\n");
     }
	return 0;
}
/*
0724422529
 mlak 

*/