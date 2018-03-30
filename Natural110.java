package set11;
import java.io.*;
public class Natural110 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int s=0;
		for(int i=1;i<=a;i++)
		{
			s=s+i;
		}
		System.out.print(s);

	}

}
