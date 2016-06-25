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

{      int x;
	printf("enter the number:");
	scanf("%d",&x);
  powerOfTwo(x)? printf("Yes\n"): printf("No\n");
 
 
  return 0;

}

	  
