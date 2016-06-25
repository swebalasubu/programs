public class NumOfWordsInLine 
{

	
  public static void main(String[] args) 
  {
       
    String inputString = "this is a program to find the number of words in a line ";      
       
       
       
    System.out.println(wordsInLine(inputString));
	
  }
   
	
	  private static long wordsInLine(String input)
  {
		
    long count = 0;
		
    for(int index = 1; index<input.length(); index++)
    {
			
      if((input.charAt(index) == ' ') && (input.charAt(index-1)!=' '))
      {
				
        count++;
			
      }	
		
    }
		
    return count;
		
	
  }


}


