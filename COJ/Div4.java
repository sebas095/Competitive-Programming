import java.util.Scanner;
import java.math.BigInteger;

public class Div4{
    public static void main(String[] args){
        Scanner sc =new Scanner (System.in);
        int cases=sc.nextInt();
        BigInteger cuatro = new BigInteger("4");
        BigInteger n;
        for(int i=0; i<cases; i++){
            n=sc.nextBigInteger();
            if(n.mod(cuatro).equals(BigInteger.ZERO))
                System.out.println("YES");
            else System.out.println("NO");
        }
    }
}