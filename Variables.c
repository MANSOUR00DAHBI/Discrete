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


 // a / 5 = 2 
int main() {
     size_t q[3] = {1,2,3}, p[3] ={1,2} ;
     size_t sum_qp[6] ={0};
     size_t sum_pq[6] = { 0 };
     size_t sum_pp[6] = { 0 };
      for(size_t i = 0; i < 3; ++i)
      {
          sum_qp[i] = q[i] * p[0];
          sum_qp[i + 3] = q[i] * p[1];

          sum_pq[i] = p[0] * q[i]  ;
          sum_pq[i + 3] = p[1] * q[i];

          sum_pp[i] = p[0] * p[i];
          sum_pp[i + 3] = p[1] * p[i];
         
      }
      for (size_t i = 0; i < 6; ++i) {
          printf("Sum q*p[%zu] : %zu ", i + 1, sum_qp[i]);
          printf("|Sum p*q[%zu] : %zu ", i + 1, sum_pq[i]);
          printf("|Sum p*p[%zu] : %zu \n", i + 1, sum_pp[i]);
      }
     for (float j = -3; j < 4; ++j) {
         for (float i = -4; i < 5; ++i) {
            if ( i == 0 && j == 0 )
                printf("0 ");
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