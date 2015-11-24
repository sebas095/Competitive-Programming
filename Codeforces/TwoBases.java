import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.StringTokenizer;

public class TwoBases{
    
    public static BigInteger base10(String s, int base){
        int size = 0, index = 0;
        StringTokenizer st = new StringTokenizer(s);
        BigInteger ans = BigInteger.ZERO, a , b;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == ' ')
                size++;
        }
        
        while(st.hasMoreTokens()){
            a = new BigInteger(st.nextToken());
            b = new BigInteger(String.valueOf(base));
            b = b.pow(size - index);
            ans = ans.add(a.multiply(b));
            index++;
        }
        
        return ans;
        
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        BigInteger ans1,ans2;
        int base1,base2;
        char ans;
        String input1, s1, input2, s2;
       
        input1 = br.readLine();
        s1 = br.readLine();
        
        input2 = br.readLine();
        s2 = br.readLine();
        
        st = new StringTokenizer(input1);
        st.nextToken();
        base1 = Integer.valueOf(st.nextToken());
        
        st = new StringTokenizer(input2);
        st.nextToken();
        base2 = Integer.valueOf(st.nextToken());
        
        ans1 = base10(s1, base1);
        ans2 = base10(s2, base2);
        
        if(ans1.compareTo(ans2) == -1)
            ans = '<';
        else{
            if(ans1.compareTo(ans2) == 0)
                ans = '=';
            else
                ans = '>';
        }
        
        System.out.println(ans);
        
    }
}