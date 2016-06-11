import java.util.*;

public class HdNumbers{
    public static int convert(char n){
        if(n == '0')return 0;
        if(n == '1')return 1;
        if(n == '2')return 2;
        if(n == '3')return 3;
        if(n == '4')return 4;
        if(n == '5')return 5;
        if(n == '6')return 6;
        if(n == '7')return 7;
        if(n == '8')return 8;
        if(n == '9')return 9;
        if(n == 'A' || n == 'a')return 10;
        if(n == 'B' || n == 'b')return 11;
        if(n == 'C' || n == 'c')return 12;
        if(n == 'D' || n == 'd')return 13;
        if(n == 'E' || n == 'e')return 14;
        if(n == 'F' || n == 'f')return 15;
        if(n == 'G' || n == 'g')return 16;
        return -1;
    }
    public static int omitirCeros(String n){
        int j=0;
        for(int i=0; i<n.length(); i++){
            if(n.charAt(i)== '0'){
                j++;
            }
            else break;
        }
        return j;
    }
    public static void answer(String a, String b){
        int i,j, longa,longb;
        i = omitirCeros(a);
        j = omitirCeros(b);
        longa = a.length()-i;
        longb = b.length()-j;
        if(longa > longb){
            System.out.println(">");
            return;
        }
         if(longa < longb){
            System.out.println("<");
            return;
        }
        while(i < a.length()){
            if(convert(a.charAt(i)) > convert(b.charAt(j))){
                System.out.println(">");
                 break;
            }
            if(convert(a.charAt(i)) < convert(b.charAt(j))){
                System.out.println("<");
                break;
            }
            i++;
            j++;
          }
        if (i == a.length()) System.out.println("=");
            
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        while(true){
            String a = sc.next();
            String b = sc.next();
            if(a.compareTo("*") == 0) break;
            answer(a, b);  
        }
    }
}