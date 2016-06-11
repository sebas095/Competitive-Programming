import java.util.Scanner;
import java.math.BigInteger;
        
public class RedMatematica {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int d,k;
        while(true){
            d = sc.nextInt();
            k = sc.nextInt();
            if(d==0 && k==0)break;
            char [] num = new char[k];
            char [] aux = new char [1];
            
            String n1,n2;
            for(int i=0; i<k; i++){
                num[i]= (char)(d+48);
            }
            n1 = String.copyValueOf(num);
            BigInteger numeros = new BigInteger(n1);
            BigInteger total = BigInteger.ZERO;
            
            numeros = numeros.pow(2);
            n2 = numeros.toString();
            
            for(int i=0; i<n2.length(); i++){
                aux[0] = n2.charAt(i);
                BigInteger temp = new BigInteger(String.copyValueOf(aux));
                total = total.add(temp);
            }
            
            System.out.println(total);
        }
    }
}
