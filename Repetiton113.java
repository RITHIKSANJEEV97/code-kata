package set12;
import java.io.*;
public class Repetiton113 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int k=Integer.parseInt(br.readLine());
		int a[]=new int[n];
		int flag=0;
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
			if(a[i]==k)
			{
				flag++;
			}
		}
		System.out.println(flag);
	}
}