package set12;
import java.io.*;
public class Count111 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int t=a;
		int c=0,r=0;
		while(t!=0)
		{
			r=t%10;
			c++;
			t=t/10;
		}
		System.out.print(c);
	}

}
