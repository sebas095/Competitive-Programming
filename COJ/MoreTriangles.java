import java.util.*;

public class MoreTriangles{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int []puntos = new int[100005];
        while(sc.hasNext()){
            int triangles=0,punto1=0,punto2=0,punto3=0;
            boolean bandera1,bandera2;
            int n = sc.nextInt();
            puntos[0] = sc.nextInt();
            
            for(int i=1; i<n; i++){
                puntos[i] = sc.nextInt() + puntos[i-1];           
            }
             int ladoTriangulo = puntos[n-1]/3;
             
             if(ladoTriangulo*3 != puntos[n-1]){
                 triangles=0;             
             }
             else{
                 for(int i=0; puntos[i] <= ladoTriangulo; i++){
                     bandera1=bandera2=false;
                     punto1 = puntos[i];
                     punto2 = punto1 + ladoTriangulo;
                     punto3 = punto2 + ladoTriangulo;
                     
                     if(Arrays.binarySearch(puntos,0,n,punto2) >=0 ){
                         bandera1=true;
                     }
                      if(Arrays.binarySearch(puntos,0,n,punto3) >= 0){
                         bandera2=true;
                     }
                     
                      if(bandera1 && bandera2){
                          triangles++;
                      }
                 }
                 
             }
             System.out.println(triangles);
        }
    }
}