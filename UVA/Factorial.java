import java.util.*;
import java.math.BigInteger;

class Factorial{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger[] fac = new BigInteger[1002];
        fac[0]=BigInteger.ONE;
        fac[1]=BigInteger.ONE;
        for (int i = 2; i < fac.length; i++) {
            fac[i]=fac[i-1].add(BigInteger.ONE);
        }
        for (int i = 1; i < fac.length; i++) {
            fac[i]=fac[i].multiply(fac[i-1]);
        }
        int n;
        while(sc.hasNext()){
            n=sc.nextInt();
            System.out.println(n+"!");
            System.out.println(fac[n]);
        }
    }
}