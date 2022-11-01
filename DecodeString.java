public class Main
{
    
    static String encode(String s,int off)
    {
        off=off%26+26;
        StringBuilder res=new StringBuilder();
        for(char i:s.toCharArray())
        {
            if(Character.isLetter(i))
            {
                if(Character.isUpperCase(i))
                {
                    res.append((char)('A'+(i-'A'+off)%26));
                }
                else
                {
                    res.append((char)('a'+(i-'a'+off)%26));
                }
            }
            else
            {
                res.append(i);
            }
        }
        return res.toString();
    }
    
    static String decode(String s,int off)
    {
        return encode(s,26-off);
    }
    
	public static void main(String[] args) {

        String s="M.Sasi";
        System.out.println("Encode "+encode(s,3));
        System.out.println("Decode "+decode(encode(s,3),3));
	}
}
