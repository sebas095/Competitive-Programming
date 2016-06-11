import java.util.Scanner;

public class Speed{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int cases=sc.nextInt();
        int n;
        for(int i=0; i<cases; i++){
            int par=0,impar=0;
            n=sc.nextInt();
            int v[]= new int[n];
            for(int j=0; j<n; j++)v[j]=sc.nextInt();
            
            for(int j=0; j<n; j++){
                if(v[j]%2 == 0)par++;
                else impar++;
            }
            
            System.out.println(par+" even and "+impar+" odd.");
        }
    }
}