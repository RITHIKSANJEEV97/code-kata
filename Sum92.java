package codekata;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Sum {
	public static void main(String args[]) throws NumberFormatException, IOException
	{
		int s=0;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
		}
		for(int i=0;i<n;i++)
		{
			s=s+a[i];
		}
		System.out.println(s);
		

		
	}

}
