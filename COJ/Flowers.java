import java.util.Scanner;

public class Flowers{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s;
        while(true){
            int cont=0,cont2=1;
            s=sc.nextLine();
            if(s.equals("*"))break;
            s=s.toLowerCase();
            char aux=s.charAt(0);
            for(int i=0; i<s.length()-1; i++){
                if(s.charAt(i)==' '){
                    cont++;
                    if(s.charAt(i+1)==aux)cont2++;
                }
            }
            if(cont+1 == cont2)
                System.out.println("Y");
            else System.out.println("N");
        }
    }
}