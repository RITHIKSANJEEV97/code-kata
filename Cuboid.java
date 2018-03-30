package codekata;

import java.util.Scanner;

public class Cuboid {
	public static void main(String args[])
	{
		int d,sf;
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		int b=s.nextInt();
		int c=s.nextInt();
		d=a*b*c;
		sf=2*(a*b)+(b*c)+(c*a);
		System.out.println(d);
		System.out.println(sf);
	}

}
