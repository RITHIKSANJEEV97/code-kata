package set11;
import java.io.*;
public class Sameorder101 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String a=br.readLine();
		int d=a.length()-1;
		int b=Integer.parseInt(br.readLine());
		int e=d-b;
		char r[]=new char[100];
		char c[]=a.toCharArray();
		int u=0;
		for(int i=d;i>e;i--)
		{
			
			r[u]=c[i];
			u++;
		}
		for(int i=u-1;i>=0;i--)
		{
			
			System.out.print(r[i]);
		}
	}

}
