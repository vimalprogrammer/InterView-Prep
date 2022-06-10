import java.util.*;
public class Main
{

    public String checkEmail(String input1)
    {
        String name="";
		int i=0;
		while(input1.charAt(i)!='@') 
		{
			name+=input1.charAt(i);
			i++;
		}
		
		String mail="";
		while(input1.charAt(i)!='.') 
		{
			mail+=input1.charAt(i);
			i++;
		}
		
		String com="";
		while(i<input1.length()) 
		{
			com+=input1.charAt(i);
			i++;
		}
		
		if(name.length()>15)
			  return name+":"+mail+":invalid";
			  
		for(i=0;i<name.length();i++)
		{
			if((input1.charAt(i)>='a'&& input1.charAt(i)<='z')||Character.isDigit(input1.charAt(i))) 
			{
				
			}
			else 
				return name+":"+mail+":invalid";
		}
		
		if(!(mail.equals("@gmail")|| mail.equals("@wipro")||mail.equals("@yahoo"))) 
			return name+":"+mail+":invalid";	
		
		if(!com.equals(".com")) 
			return name+":"+mail+":invalid";	
		
		return name+":"+com+":"+":valid";
    }
    
	public static void main(String[] args) {
	    
	    Main m=new Main();
	    String s="vimalvarsh@gmail.com";
	    String res=m.checkEmail(s);
	    System.out.println(res);
	}
}
