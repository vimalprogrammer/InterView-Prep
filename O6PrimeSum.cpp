import java.util.*;
//import java.

public class Main
{
    int isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return 0;
        }
        return n;
    }
    
    
	public static void main(String[] args) 
	{
        Scanner sc=new Scanner(System.in);
        Main m=new Main();
        
        int n=sc.nextInt();
        
        ArrayList<Integer>ar=new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
            int a=sc.nextInt();
            ar.add(a);
        }
        
        Collections.sort(ar);
        int sum=0;
        int dum=0,concat=0;
        for(int i=0;i<n;i++)
        {
            sum+=m.isprime(ar.get(i));
            dum=m.isprime(ar.get(i));
            if(dum!=0)
            {
                concat=dum;
            }
        }
        System.out.println(sum-concat);
        
	}
}
