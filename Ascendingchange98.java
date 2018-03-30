package codekata;
import java.io.*;
public class Ascendingchange98 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int a[]=new int[n+1];
		for(int i=1;i<=n;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
		}
		for(int i=1;i<=n;i++)
		{
			if(i!=a[i])
			{
				System.out.print(i);
			}
		}
	}

}
