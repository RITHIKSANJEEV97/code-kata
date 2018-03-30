package codekata;
import java.io.*;
public class Reverse97 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int t=a;
		int i=0;
		int b[]=new int[100];
		while(t!=0)
		{
			b[i]=t%10;
			i++;
			t=t/10;
		}
		for(int j=0;j<i;j++)
		{
		System.out.print(b[j]);
	}
	}}