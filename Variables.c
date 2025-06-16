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
   
      float R[2]={-3,2}  ;
      float sum_RR[2][3] = { {2,4,6},
                             {1,3,5} };
      float A[3]={2,4,6} , B[3]={1,3,5}  ;
   
#if 1
      printf(" Set \n");
      for (size_t x = 0; x < 3;++x) {
            for (size_t y = 0; y < 3; ++y) {
                printf(" (%.0f,%.0f)",A[x],B[y]);
            }printf("\n");
      } printf(" MAtrex \n");
      printf("{\n");
      for (size_t x = 0; x < 2;++x) {
          for (size_t y = 0; y < 3; ++y) {             
              printf(" %.0f ,", sum_RR[x][y]);
          }printf(" \n");
      }printf("}\n");

     for (float j = -4; j < 5; ++j) {
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
#else 
    
 
#endif  
	return 0;
}
/*
0724422529
 mlak 

*/