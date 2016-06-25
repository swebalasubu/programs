#include<stdio.h>
int main()
{
  int i,j,k=0,l=0;
  printf("\n");
  for(i=0;i<=255;i++)
  {
    printf("%5d%2c",k,k);
    k++;
    l++;
    if(l==11)
    {
      l=0;
      for(j=1;j<=2;j++)
        printf("\n");
    }
  }
return 0;
}
