import java.util.*;

public class Main
{
	public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int input1=sc.nextInt();
		int input2=sc.nextInt();
		int input3=sc.nextInt();
		int input4=sc.nextInt();
		int input5=sc.nextInt();
		
		
		String input[]={String.valueOf(input1),String.valueOf(input2),String.valueOf(input3),String.valueOf(input4),String.valueOf(input5)};
		int stable=0;
		int unstable=0;
		int stable_list[]=new int[5];
		int scount=0;
		int unstable_list[]=new int[5];
		int uscount=0;
		TreeSet<Integer> ts=new TreeSet<Integer>();
		for(int i=0;i<5;i++)
		{
			int digit[]=new int[10];
			for(int j=0;j<input[i].length();j++)
			{
				digit[input[i].charAt(j)-48]++;
			}
			for(int k=0;k<10;k++)
			{
				if(digit[k]!=0)
					ts.add(digit[k]);  
			}
			if(ts.size()>1)
			{
				unstable++;
				unstable_list[uscount]=Integer.parseInt(input[i]);
				uscount++;
			}
			else
			{
				stable++;
				stable_list[scount]=Integer.parseInt(input[i]);
				scount++;
			}
			ts.clear();
		}
    for(int i:stable_list)
    {
        if(i!=0)
            System.out.print(i+" ");
    }
    System.out.println();
    for(int i:unstable_list)
    {
        if(i!=0)
        {
            System.out.print(i+" ");
        }
    }

	}
}
