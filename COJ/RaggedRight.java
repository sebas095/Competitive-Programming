import java.util.*;

public class RaggedRight {
    public static void main(String[] args){
        
    Scanner sc = new Scanner(System.in);
        String []linea = new String[100];
        int cont=0,longi=0,n=0,m=0,f=0;
        for(int i=0; i < linea.length; i++){
            if(sc.hasNext()){
                linea[i] = sc.nextLine();
                cont++;
                if(linea[i].length() > linea[longi].length()){
                    longi = i;
                }
            }
            else break;
        }
        n = linea[longi].length();
        for(int i= 0; i < cont-1;i++){
            if(i==longi)continue;
            else{
                m = linea[i].length();
                f += Math.pow(n-m,2);
            }
                
        }
        
        System.out.println(f);
    }
    
}