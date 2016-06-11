import java.util.*;
public class Numbers {
    
    public static char[] number(String s){
        s = s.toUpperCase();
        char n[] = s.toCharArray();
        for(int i=0;i < n.length; i++){
            if(n[i] == 'A' || n[i]=='B' || n[i] == 'C') n[i]='2';
            if(n[i] == 'D' || n[i]=='E' || n[i] == 'F') n[i]='3';
            if(n[i] == 'G' || n[i]=='H' || n[i] == 'I') n[i]='4';
            if(n[i] == 'J' || n[i]=='K' || n[i] == 'L') n[i]='5';
            if(n[i] == 'M' || n[i]=='N' || n[i] == 'O') n[i]='6';
            if(n[i] == 'P' || n[i]=='Q' || n[i] == 'R' || n[i] == 'S') n[i]='7';
            if(n[i] == 'T' || n[i]=='U' || n[i] == 'V') n[i]='8';
            if(n[i] == 'W' || n[i]=='X' || n[i] == 'Y' || n[i] == 'Z') n[i]='9';
        }
        return n;
        
    }
    
    public static void main(String[] args) {
        int k=0;
        int f;
        String s;
        String aux="";
        Scanner sc= new Scanner(System.in);        
        f=sc.nextInt();
        
       while(k<f){ 
           boolean palindrome=false;
           int cont=0;
           s= sc.next();
           char vc[] = new char[s.length()];
           int i;
           int pos=0;
           char[] e= number(s);
           for(i= e.length-1; i>=0; i--) {
               vc[pos] = e[i];
               pos++;
           }
           for(int j=0 ; j<=vc.length-1 ; j++) {
               if(vc[j] == e[j]) {
                   palindrome=true;
                   continue;
               }
               else{
                    palindrome=false;
                    break;
               }
           }
           if(palindrome) {
           System.out.println("YES" );
           
       }
            else{
           System.out.println("NO" );
       } 
         
       
       k++;
       }
         
             
    }   
}
