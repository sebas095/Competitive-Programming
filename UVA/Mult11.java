// Problem: https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1870&mosmsg=Submission+received+with+ID+
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Mult11 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BigInteger eleven = new BigInteger("11");

        while (true) {
            String n = br.readLine();
            if (n.equals("0")) break;
            BigInteger bi = new BigInteger(n);

            if (bi.mod(eleven).equals(BigInteger.ZERO))
                System.out.println(n + " is a multiple of 11.");
            else System.out.println(n + " is not a multiple of 11.");
        }
    }
}
