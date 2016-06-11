import java.util.Scanner;
import java.math.BigInteger;

public class EvenOdd{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int cases;
		BigInteger dos = new BigInteger("2");
		BigInteger n;
		cases=sc.nextInt();
		for(int i=0; i<cases; i++){
			n=sc.nextBigInteger();
			if(n.mod(dos).equals(BigInteger.ZERO))System.out.println("even");
			else System.out.println("odd");
		}
	}
}