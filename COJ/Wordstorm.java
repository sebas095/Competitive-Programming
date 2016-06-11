import java.util.*;

public class Wordstorm{
    public static boolean letraCentro(String word, String wordstorm){
        boolean flag = false;
        for(int j=0; j<word.length(); j++){
            if(word.charAt(j) == wordstorm.charAt(4)){
                flag = true;
	         j = 9;
	     }
	 }
        return flag;
    }
    
    public static boolean esSubPalabra(String word, String wordstorm){
        boolean flag = true;
	boolean wordstormFlag[] = new boolean[11];
        for(int j=0; j<wordstormFlag.length; j++)
            wordstormFlag[j] = true;
		
        for(int j=0; j<word.length(); j++){
            flag = false;
            for(int k=0; k<9; k++){
                if((word.charAt(j) == wordstorm.charAt(k)) && wordstormFlag[k]){
                    flag = true;
                    wordstormFlag[k] = false;
                    k = 9;
                }
            }
            if(!flag)
                j = word.length();
        }
        return flag;
    }
    
    public static void main(String[] args){
        int n, i; 
	String wordstorm, word;
	Scanner sc = new Scanner(System.in);
	while(sc.hasNext()){
            wordstorm = sc.next();
	    n = sc.nextInt();
            for(i=1; i<=n; i++){
                word = sc.next();
		if(word.length() <= 3)
                    System.out.println(word + " is invalid");
                else{
                    if(letraCentro(word, wordstorm)){
                        if(esSubPalabra(word, wordstorm))
                            System.out.println(word + " is valid");
                        else
                            System.out.println(word + " is invalid");
                    }
                    else
                        System.out.println(word + " is invalid");
                }
            }
        }
    }
}