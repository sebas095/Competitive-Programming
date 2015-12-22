import java.util.*;
import java.math.BigInteger;

class OpeningDoors{
     public static BigInteger sqrt(BigInteger inf,BigInteger sup, BigInteger n){
        BigInteger m = BigInteger.ZERO;
        BigInteger dos = new BigInteger("2");
        BigInteger cuad = new BigInteger("1");
       
        if(inf.compareTo(sup) > 0)
            return inf.subtract(BigInteger.ONE);
        else{
            m = inf.add(sup);
            m = m.divide(dos);
            cuad = m.pow(2);
            if(n.compareTo(cuad) == 0)
                return m;
            else{
                if(n.compareTo(cuad)==-1)
                    return sqrt(inf, m.subtract(BigInteger.ONE), n);
                else{
                    return sqrt(m.add(BigInteger.ONE), sup, n);
                }
            }
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger num = BigInteger.ZERO;
        BigInteger max = BigInteger.TEN;
        max = max.pow(50);
        BigInteger door = BigInteger.ZERO;
        while(true){
            num = sc.nextBigInteger();
            if(num.equals(BigInteger.ZERO))break;
            door = sqrt(BigInteger.ONE, max, num);
            door = door.pow(2);
            System.out.println(door);
        }
    }
}