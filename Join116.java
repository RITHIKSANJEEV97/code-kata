package set12;
import java.io.*;
public class Join116 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int k=Integer.parseInt(br.readLine());
		int t = 0,t1=0;
		t=n;
		t1=k;
		int r=0,i=0,m=0,c=0;
		int a[]=new int[10];
		while(t1!=0)
		{
			m=t1%10;
			a[i]=m;
			i++;
			t1=t1/10;
		}
		while(t!=0)
		{
			r=t%10;
			a[i]=r;
			i++;
			t=t/10;
		}
		for(int j=i-1;j>=0;j--)
		{
			System.out.print(a[j]);
		}
			
	}

}
