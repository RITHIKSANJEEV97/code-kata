package codekata;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Simpleintrest95 {

	public static void main(String[] args) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int p=Integer.parseInt(br.readLine());
		int n=Integer.parseInt(br.readLine());
		int r=Integer.parseInt(br.readLine());
		System.out.println(p*n*r/100);
		
	}

}
