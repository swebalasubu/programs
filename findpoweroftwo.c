#include<stdio.h>

#define bool int
 
/* Function to check if x is power of 2*/

bool powerOfTwo (int x)

{
  /* First x in the below expression is for the case when x is 0 */
  
  return x && (!(x&(x-1)));

}
 
/*Driver program to test above function*/

int main()

{
  powerOfTwo(17)? printf("Yes\n"): printf("No\n");
  powerOfTwo(-16)? printf("Yes\n"): printf("No\n");
  
  powerOfTwo(4)? printf("Yes\n"): printf("No\n");
   powerOfTwo(19)? printf("Yes\n"): printf("No\n");
  powerOfTwo(8)? printf("Yes\n"): printf("No\n");
 
  return 0;

}

	  
