import java.util.Scanner;
import java.io.*;
import java.math.BigInteger;

class SquareRoot{
  public static BigInteger sqrt(BigInteger n){
    BigInteger a = BigInteger.ONE;
    BigInteger b = n;
    BigInteger dos = new BigInteger("2");
    do {
      a = b;
      b = (a.add(n.divide(a))).divide(dos);
    } while (a.compareTo(b) != 0);
    return b;
  }

    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int cases = sc.nextInt();
      boolean space = false;
      for (int i = 1; i <= cases ; i++) {
          if(space)
              System.out.println();
          space = true;
          BigInteger num = sc.nextBigInteger();
          System.out.println(sqrt(num));
      }
    }
}
