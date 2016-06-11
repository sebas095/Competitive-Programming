  import java.util.*;

public class HowPrimes{
    public static void inicializarCriba(int criba[], int n){
        int i;
	criba[2] = 1;
	for(i=3; i<=n;){
            criba[i] = 1;
	    i += 2;
	}
	return;
     }
    
    public static void cribaEratostenes(int criba[], int n){
        int i, j, lim = (int)Math.sqrt((double)n);
        inicializarCriba(criba, n);
        for(i=3; i<=lim; i++){
            if(criba[i] == 1){
                for(j=3; i*j <= n;){
                    criba[i*j] = 0;
		    j += 2;
		}
	     }
	}
	return;
    }
    
    public static void acumuladoDePrimos(int criba[], int n){
        int i;
        for(i=1; i<=n; i++)
            criba[i] = criba[i] + criba[i-1]; 
        return;
    }
    
    public static void main(String[] args){
        int tam = 1000000, a, b;
        int criba[] = new int[tam + 1];
	Scanner sc = new Scanner(System.in);
       cribaEratostenes(criba, tam);
       acumuladoDePrimos(criba, tam);
       do{
           a = sc.nextInt();
	   b = sc.nextInt();
           if (a>0 && b>0){
               System.out.println(criba[b] - criba[a-1]);
	   }
       }while(a>0 && b>0);
       return;
    }
}