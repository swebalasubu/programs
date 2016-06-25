#include<iostream.h>
#include<string.h>
#include<math.h>

void main()
{
 
    int i=0,n;
    cout<<"Please give the number of elements for the array\n"
    cin>>n;
    int a[n],individualNumber,sum=0;
    for(i=0;i<n;i++)
    {
      cout<<"Please give the %d th element<<i\n"
      cin>>a[i];
      individualNumber = a[i];
      if((i+1)%2==0)        /* to find if the index is in odd or even position */
       sum=(individualNumber*individualNumber)+sum;
      else
       sum=(individualNumber*individualNumber*individualNumber)+sum;
     }
     
    cout<<sum;
}  
