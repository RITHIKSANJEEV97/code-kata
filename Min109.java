package set11;
import java.io.*;
public class Min109 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int min=99999;
		int a[]=new int[10];
		for(int i=0;i<10;i++)
		{
			a[i]=Integer.parseInt(br.readLine());
		}
		for(int i=0;i<10;i++)
		{
		if(a[i]<min)
		{
			min=a[i];
		}
		}
		System.out.print(min);
	}

}
