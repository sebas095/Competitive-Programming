import java.util.Scanner;
import java.math.BigInteger;

public class Div495{
    public static void main(String[] args){
        Scanner sc =new Scanner (System.in);
        int cases=sc.nextInt();
        BigInteger div = new BigInteger("495");
        BigInteger n;
        for(int i=0; i<cases; i++){
            n=sc.nextBigInteger();
            if(n.mod(div).equals(BigInteger.ZERO))
                System.out.println("YES");
            else System.out.println("NO");
        }
    }
}