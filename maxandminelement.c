#include <stdio.h>



int main(void)

{
	

 
int n;
	

 int a[n],i,j, min=0, max=0;
	
 

 printf("enter the number of elements \n");
	


 scanf("%d",&n);
	  

 
printf("enter the elements of the array\n");
	 
 

 for(i=0;i<n;i++)

 {
  

 scanf("%d",&a[i]);
	 
  
  if(i == 1)
  {
     
   if (a[0]>a[1])
   {
      
    max = a[0];
      
    min = a[1];
    
   }
   else
   {
      
    max = a[1];
      
    min = a[0];
    
   }
  
  }
  else if(i>1)
  {
   
    
   if(a[i]>max)
   {
        
      
    max = a[i];
       
    
   } 
    
   if(a[i]<min)
   {
     
      
    min = a[i];
        
    
   } 
 
  
  }
 

 }


printf("Maximum %d \n Minimum %d",max,min);
 
return 0;


}
