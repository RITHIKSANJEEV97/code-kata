package rith;

import java.util.Scanner;

public class Max {
public static void main(String args[])
{
	int max=-99999;
	{
	Scanner e=new Scanner(System.in);
	int n=e.nextInt();
	int[] a=new int[n];
	for(int i=0;i<n;i++)
	{
		  a[i] = e.nextInt();
	}
	for(int i=0;i<n;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	}
	System.out.print(max);

}
}
}
