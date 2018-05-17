package set1;
import java.io.*;
public class Reverse1 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String a=br.readLine();
		char[] b=a.toCharArray();
		int c=a.length();
		char[] d=new char[c];
		for(int i=0;i<c;i++)
		{
			d[i]=b[c-1-i];
			System.out.print(d[i]);
		}
		
		
	}

}
