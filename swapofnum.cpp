#include <iostream>


using namespace std;

class swap1

{
    
  int a,b,c;
    
  public:
    
  void swapper()
    
  {
        
   int temp;
  /*temporary variable is declared */   
   temp=a;
  /* temporary variable is intialized to a */      
   a=b;
        
   b=temp;
        
   cout<<"swapped values are a=" <<a;
        
   cout<<"b=" <<b;
        
   
  }
    
  void swap()
    
  {
        
   cout<<"enter the first number";
        
   cin>>a;
        
   cout<<"enter the second number";
        
   cin>>b;
    
  }

};

int main()

{
    
  swap1 s;
    
  s.swap();
    
  s.swapper();
     
  return 0;

}


