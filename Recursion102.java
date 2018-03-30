package set11;
import java.io.*;
public class Recursion102 {
    static int div(int n)
    {
    	int d=n;
    	if(d%2==0)
    	{
    		d=n/2;
    		return div(d);
    	}
		return d;
    
    }
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		Recursion102 d=new Recursion102();
		d.div(a);
		System.out.println(div(a));
		
	}

}
