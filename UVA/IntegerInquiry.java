import java.util.Scanner;
import java.math.BigInteger;

class  IntegerInquiry{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger num = new BigInteger("0");
        BigInteger res = new BigInteger("0");
        while (true){
            num = sc.nextBigInteger();
            if(num.compareTo(BigInteger.ZERO) == 0){
                System.out.println(res);
                break;
            }
            res = res.add(num);
        }
    }
}