package set11;
import java.io.*;
public class Exor104 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int b=Integer.parseInt(br.readLine());
		int c=1;
		for(int i=0;i<b;i++)
		{
			c=c*a;
		}
		System.out.println(c);
	}

}
