public class ExtensionOfFile{

public static void main(String[] args)
{
       
  String inputString = "HelloWorld.jpeg";      
       
  System.out.println(findFileExtension(inputString));
	
}
   /* This Private method is to find the file extension from the given input file name as a String. It will 

return the extension as a string.*/
	
private static String findFileExtension(String inputString)
{
		   
  String returnString = "";
	       
  String charString = "";
	       
  int index;
	       
  for(index = inputString.length()-1; index > 0; index--)
  {
	    	  
    charString = String.valueOf(inputString.charAt(index));
	    	   
    if(charString.equals(".") )
    {
	    		   
      break;
	    	   
    }
    else
    {
	    		   
      returnString = charString + returnString;  
	    	  
    }
	       
  }
		   
  if(index == 0)
  {
			   
    returnString = "There is no file Name with Extension!";  
		  
  }
		
  return returnString;
		
	
  }

}
