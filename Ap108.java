package set11;
import java.io.*;
public class Ap108 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int sum=0;
		int ap=Integer.parseInt(br.readLine());
		int start=Integer.parseInt(br.readLine());
		int end=Integer.parseInt(br.readLine());
		sum=ap+(end-1)*start;
		System.out.print(end*(ap+sum)/2);
	}

}
