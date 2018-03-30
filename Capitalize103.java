package set11;
import java.io.*;
public class Capitalize103 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s=br.readLine();
		int l=s.length();
		char a[]=s.toCharArray();
		for(int i=0;i<l;i++)
		{
			if(a[i]==' ' && a[i]>='a' && a[i]<='z')
			{
				a[i+1]=(char) (a[i+1]-32);
			}
			if(a[0]>='a' && a[0]<='z')
			{
				a[0]=(char)(a[0]-32);
			}
		}
		for(int i=0;i<l;i++)
		{
			System.out.print(a[i]);
		}
	}

}
