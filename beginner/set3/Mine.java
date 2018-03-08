package rith;

import java.util.Scanner;

public class Mine {
	public static void main(String args[])
	
	{
		int a,n,d,s=0;
		Scanner e=new Scanner(System.in);
		System.out.print("enter n a d to calculate arithmetic progression");
		n=e.nextInt();
		a=e.nextInt();
		d=e.nextInt();
		 s = (n * (2 * a + (n - 1)* d ))/ 2;
		 System.out.print("ap is "+s);
		}

}
