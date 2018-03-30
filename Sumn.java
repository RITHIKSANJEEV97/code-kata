package codekata;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Sumn {
public static void main(String args[]) throws IOException
{
	BufferedReader bg=new BufferedReader(new InputStreamReader(System.in));
	String c=bg.readLine();
	String[] arr=c.split(" ");
	String s = "";
    for (String n:arr)
        s+= n;
	char t[]=s.toCharArray();
	int p=t.length;
	char d[]=new char[20];
	int n=c.length();
	for(int i=0;i<p;i++)
	{
		d[i]=t[p-1-i];
	}
	for(int i=0;i<p;i++)
	{
		System.out.print(d[i]);
	}
	
	
}
}
