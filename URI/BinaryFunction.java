import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class BinaryFunction {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String tc, number;
        BigInteger bi;

        tc = br.readLine();
        for (int i = 0; i < Integer.valueOf(tc); i++) {
            number = br.readLine();
            bi = new BigInteger(number);
            System.out.println(bi.bitCount());
        }
    }
}
