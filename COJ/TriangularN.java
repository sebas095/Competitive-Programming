import java.util.Scanner;
import java.math.BigInteger;

class TriangularN{
    public static int BinarySearch(BigInteger valueinf, BigInteger valuesup, BigInteger n){
        BigInteger m = new BigInteger("1");
        BigInteger fact1 = new BigInteger("1");
        BigInteger fact2 = new BigInteger("1");
        BigInteger triangularTemp = new BigInteger("1");
        BigInteger dos = new BigInteger("2");
        
        if(valueinf.compareTo(valuesup) > 0)
            return -1;
        
        else{
            m = valueinf.add(valuesup);
            m = m.divide(dos);
            fact1 = m;
            fact2 = m.add(BigInteger.ONE);
            
            triangularTemp = fact1.multiply(fact2);
            triangularTemp = triangularTemp.divide(dos);
            
            if(triangularTemp.compareTo(n) == 0)
                return 1;
            
            else{
                if(n.compareTo(triangularTemp) == 1)
                    return BinarySearch(m.add(BigInteger.ONE), valuesup, n);
                else 
                    return BinarySearch(valueinf, m.subtract(BigInteger.ONE), n);
            } 
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String num;
        BigInteger tNum = BigInteger.ZERO;
        BigInteger maxValor = new BigInteger("9000000000");
        while(true){
            tNum = new BigInteger(sc.next());
            if(tNum.compareTo(BigInteger.ZERO)== 0)break;
            if(BinarySearch(BigInteger.ONE,maxValor, tNum) == 1)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}