import java.util.*;

public class Main
{
    int solve(int n1)
    {
        int max=-1,min=96321;
        while(n1!=0)
        {
            int r=n1%10;
            n1/=10;
            
            if(max<r)
                max=r;
            
            if(min>r)
                min=r;    
        }
        return max*min;
    }
    
	public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    Main m=new Main();
    
    int in1=sc.nextInt();
    int in2=sc.nextInt();
    int in3=sc.nextInt();
    int in4=sc.nextInt();
    
    int[] a= {in1,in2,in3};
    int res=1;
    for(int i=0;i<3;i++)
    {
        res*=m.solve(a[i]);
    }
    
    res=res-in4;
    
    System.out.println(res);
    
	}
}
