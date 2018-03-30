package codekata;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Kelvin {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int celcius=Integer.parseInt(br.readLine());
		System.out.println(celcius+273);
	}

}
