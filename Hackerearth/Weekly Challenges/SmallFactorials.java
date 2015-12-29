import java.io.*;
import java.math.BigInteger;

public class SmallFactorials{
    static BigInteger memo[];
    
    public static void init() {
        memo = new BigInteger[108];
        memo[0] = memo [1] = BigInteger.ONE;
        for (int i = 2; i < memo.length; i++) {
            memo[i] = new BigInteger(String.valueOf(i));
        }
    }
    
    public static void DP() {
        init();
        for (int i = 2; i < memo.length; i++) {
            memo[i] = memo[i].multiply(memo[i - 1]);
        }
    }
    
    public static void main(String[] args) throws IOException {
        DP();
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int t, n;
        t = Integer.valueOf(bf.readLine());
        
        for (int i = 0; i < t; i++) {
            n = Integer.valueOf(bf.readLine());
            System.out.println(memo[n]);
        }
    }
}