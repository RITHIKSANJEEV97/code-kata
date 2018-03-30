package codekata;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class composite96 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int c=0;
		int n=Integer.parseInt(br.readLine());
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		if(c==1)
		{
			System.out.print("No");
		}
		else
		{
			System.out.println("Yes");
		}
	}

}
