package codekata;
import java.io.*;
public class Product100 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int t=a;
		int s=1;
		int b;
		while(t!=0)
		{
			b=t%10;
			s=s*b;
			t=t/10;
		}
		System.out.println(s);
	}

}
