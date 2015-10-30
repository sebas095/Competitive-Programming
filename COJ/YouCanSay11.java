import java.util.*;
import java.math.BigInteger;

public class YouCanSay11{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger num;
        BigInteger once = new BigInteger("11");
        while(true){
            num=sc.nextBigInteger();
            if(num.equals(BigInteger.ZERO))break;
            if(num.mod(once).equals(BigInteger.ZERO))System.out.println(num+" is a multiple of 11.");
            else  System.out.println(num+" is not a multiple of 11.");
        }
    }
}