import java.util.Scanner;
import java.math.BigInteger;

public class SuperSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BigInteger num,tot = BigInteger.ZERO;
        while(n > 0){
            n--;
            num = sc.nextBigInteger();
            tot = tot.add(num);
        }
        System.out.println(tot);
    }
    
}