import java.util.Scanner;
import java.math.BigInteger;

public class PowersofTwo{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger dos= new BigInteger("2");
        int n;
        n=sc.nextInt();
        System.out.println(dos.pow(n));
    }
}