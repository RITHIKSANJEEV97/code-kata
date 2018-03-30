package set12;
import java.io.*;
public class Kthodd114 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		int k=Integer.parseInt(br.readLine());
		int a[]=new int[n];
		int d[]=new int[n];
		int y=1;
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
		}
		for(int i=0;i<n;i++)
		{
			if((a[i] & 1)!=0)
			{
				d[y]=a[i];
				y++;
			}
		}
		System.out.println(d[k]);
	}
}